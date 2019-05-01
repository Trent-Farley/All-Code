#include <iostream>
#include "./link_list.hpp"
using std::cout;
using std::endl; 
void show(node *head){// Display the current stack

    if(head == nullptr)
    {
        cout << "NULL" << endl;
    }
    else
    {
        cout << head->val << endl;
        show(head->next);
    }
}
int main(){
    linked_list list;
  
    for(int i=0; i<5; i++){
        list.create(i);
    }

    show(list.get_head());


}
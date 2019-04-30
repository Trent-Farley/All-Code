#include <iostream>
#include "link_list.hpp"
using std::cout;
using std::endl; 
void show(node *head){// Display the current stack

    if(head == nullptr)
    {
        cout << "NULL" << endl;
    }
    else
    {
        cout << head->num << endl;
        show(head->next);
    }
}
int main(){
    linked_list list;
    for(int i; i<5; i++){
        list.add_nodes(i,i+2);
    }
    list.add_nodes(10, 2);
    show(list.get_head());


}
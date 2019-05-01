#include <iostream>
#include "./link_list.hpp"
using std::cout;
using std::endl; 
void show(struct node* head) 
{ 
    while (head != nullptr) { 
        cout << " " << head->val; 
        head = head->next; 
    } 
    cout << endl; 
} 
int main(){
    linked_list list;
  
    node* test = list.create(5);
    cout<<test->val<<endl;
    show(list.get_head());


}
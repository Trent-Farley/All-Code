#include "auto_sort.hpp"
#include <iostream>
using std::cout;
using std::endl;
void show(struct node* head) {
 
    while (head!=nullptr) { 
        cout << "->" << head->val; 
        head = head->next; 
    } 
    cout << endl; 
    

} 
int main(){
    linked_list list;
    cout<<"This has problems"<<endl;
    
}
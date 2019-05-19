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
    
     node *head = list.insert(list.head, 0);
     head = list.insert(list.head, 1);

    /*for(int i = 0; i<12; i++){ 
       
        list.insert(head, i);
        
    }
    */
    
    show(list.head);
    //cout<<endl;
    // for(int i = 3; i<6; i++){
    //     list.insert(list.head, i);
    //     //show(list.head);
    // }
    // show(list.head);
}
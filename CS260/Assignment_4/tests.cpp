#include "auto_sort.hpp"
#include <iostream>
#include <cstdlib>//Did not realize this was a library, thanks for 
//showing this 
using std::cout;
using std::endl;
void show(struct node*head, int size) {// Moved to seperate file since it has cout
        node *pointer;
        if(head->next == nullptr){
            cout<<"Sorry, List is Empty!"<<endl;
        }
        else{
            pointer = head->next;
            for(int i= 0; i<size; i++){
                cout<<" << ";
                cout<<pointer->val;
                if(pointer->next){
                    pointer = pointer->next;
                }
                
            }
            cout<<endl;
        }
} 
void test(){
    srand(time(NULL));
    linked_list list;
    show(list.head, list.size);
    for(int i = 0; i < 10; i++)
    {
        list.insert(rand() % 100 -30);
    }
    show(list.head, list.size);
}
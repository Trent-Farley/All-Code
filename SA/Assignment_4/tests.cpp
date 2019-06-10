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
    cout<<"Displaying an empty list, hit enter to continue"<<endl;
    show(list.head, list.size);
    getchar();

    for(int i = 0; i < 10; i++){
        int random = rand() % 100 - 30;
        list.insert(random);
    }
    cout<<"Inserted numbers, click enter to continue"<<endl;
    show(list.head, list.size);
    getchar();
    for(int i = 0; i < 6; i++){
        list.insert(i);
    }

    cout<<"Inserted numbers to remove,and find, hit enter to continue"<<endl;
    show(list.head, list.size);
    int val;
    for(int i = 0; i<6; i++){
        val = list.get_val(i);
        if(val == -1){
            cout<<" The value " <<i<< " was not there"<<endl;
        }
        else{
            cout<<" << "<<val;
        }
    }
    cout<<endl;
    getchar();
    int removed_val;
    for(int i = 0; i < 5; i++){
        
        removed_val = list.remove(i);
        if(removed_val == -1){
            cout<<" The value " <<i<< " was not there"<<endl;
        }
        else{
            cout<<" << "<<removed_val;
        }
    }
    show(list.head, list.size);
    cout<<" Removed nodes, tests are complete"<<endl;
    

}
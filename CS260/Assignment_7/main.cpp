/*
THE PLAN:
I plan on having this hash function to put the value into the position
that the value is in. The array is not going to be infinite, so whatever
the end is it will just be stuck there in a linked list. This will be 
measured in a size value, but I do not know how yet. 

EDIT:
Got it working, multiple values are stuck in a linked list. 

EDIT:
Problem with larger value, not sure what is wrong, just seg faults
*/

#include <iostream>
#include <cstdlib>
#include "hash.hpp"
using std::cout;
using std::endl;

int main(){
    
    Hash_Table table;
    
    
    table.find_and_put(12);
    table.find_and_put(12);
    table.find_and_put(10);    
    table.find_and_put(10);
    table.find_and_put(-1);
    table.find_and_put(-6);
    table.find_and_put(20);
    table.find_and_put(20);
    table.find_and_put(25);
    table.find_and_put(-3);
    table.find_and_put(-33);
    
    
    for(int i=0; i<20; i++){
        
        if(table.arr[i]->next != NULL ){
            node *curr = table.arr[i];
            while(curr != NULL){
                cout<<endl; 
                cout<<curr->data<<endl;
                curr = curr->next;
            }
        }
        else{
            cout<<" << "<<table.arr[i]->data;
        }
    }

    cout<<endl;

}
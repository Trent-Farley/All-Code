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
    table.find_and_put(12);
    table.find_and_put(10);
    table.find_and_put(10);

    table.find_and_put(20);
    table.find_and_put(20);

    table.find_and_put(25);
    
    
    node **example = table.find_and_put(0);
    
        

    
    for(int i=0; i<20; i++){
        cout<<" << "<<example[i]->data;
        if(example[i]->next!=NULL){
            node *curr = example[i];
            while(curr != NULL){
                cout<<endl;
                
                cout<<curr->data<<endl;
                curr = curr->next;
            }
        }
    }

    cout<<endl;

}
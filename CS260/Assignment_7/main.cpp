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
    node **example = table.find_and_put(0);
    
        

    
    for(int i=0; i<21; i++){
        cout<<" << "<<example[i]->data;
        if(example[i]->next!=NULL){
            node *curr = example[i];
            while(curr != NULL){
                cout<<endl;
                
                cout<<example[i]->next->data<<endl;
                curr = curr->next;
            }
        }
    }

    cout<<endl;

}
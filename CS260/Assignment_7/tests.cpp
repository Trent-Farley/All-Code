#include <iostream>
#include <cstdlib>
#include "hash.hpp"
using std::endl;
using std::cout;
Hash_Table table;

void show(){

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
void test_input(){
    //Test input by randomly inserting values. 
    srand(time(NULL));
    table.find_and_put(4);
    table.find_and_put(5);
    for(int i = 0; i<20; i++){
        int random = rand() % (20) - 5;
        
        table.find_and_put(random);
    }
    
    
}
void test_find(){
    //This could be better, but it works. The value will always return true if my code works
    //Since im hardcoding the values and using random to fill  the others, this is not the best
    //way to do so, but I need to move on. 
    bool exist = table.find(4);
    if(exist == true){
        cout<<"The value 4 is in the table"<<endl;
    }
    exist = table.find(5);
    if(exist == true){
        cout<<"The value 5 is in the table"<<endl;
    }
}
void all_tests(){
    //Tests include:
    //Test_input
    //Show
    //test_find
    test_input();
    
    show();
    test_find();
    cout<<"Sorry the table does not print nicely"<<endl;
}
#include <iostream>
#include <cstdlib>
#include "hash.hpp"
using std::cout;
using std::endl;

int main(){
    Hash_Table table;
    node **example = table.find_and_put(0);
    //node **sec_example = table.find_and_put(12);
    for(int i=0; i<21; i++){
    
        cout<<" << "<<example[i]->data;
    }

    cout<<endl;

}
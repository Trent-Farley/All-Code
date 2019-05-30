#include <iostream>
#include <cstdlib>
#include "hash.hpp"
using std::cout;
using std::endl;

int main(){
    Hash_Table table;
    node **example = table.find_and_put(0);
    for(int i=0; i<20; i++){
        cout<<" << "<<example[i]->data;
    }
    cout<<endl;

}
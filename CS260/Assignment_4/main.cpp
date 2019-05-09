#include <iostream>
#include "Array.hpp"
using std::cout;
using std::endl;

int main(){

    
    Array array;
    for(int i = 0; i<10; i++){
        array.create(i);

    }
    cout<<array.arr[1];
    cout<<endl;

}
#include <iostream>
#include "Array.hpp"
using std::cout;
using std::endl;

int main(){

    Array array;
    array.sized = 10;
    for(int i = 0; i<10; i++){
        array.data = i;
        cout<<array.arr[i];
    }
    cout<<endl;

}
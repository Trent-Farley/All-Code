#include "tests.cpp"
#include <iostream>
using std::cout;
using std::endl;
//Everything is O(1), except for finding stuff (while loops and for loops) which is O(n)
int main(){
    all_tests();
    cout<<"All good tests have been ran\npress enter key to continue to bad ones"<<endl;
    getchar();
    bad_tests();
    cout<<"\nHere is the ending list"<<endl;
    show(list.head);
    
}
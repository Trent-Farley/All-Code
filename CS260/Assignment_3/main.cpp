#include "tests.cpp"
#include <iostream>
using std::cout;
using std::endl;
int main(){
    all_tests();
    cout<<"All good tests have been ran\npress any key to continue to bad ones"<<endl;
    getchar();
    bad_tests();
}
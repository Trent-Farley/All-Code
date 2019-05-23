#include "auto_sort.hpp"
#include <iostream>
using std::cout;
using std::endl;


int main(){

    linked_list list;
    list.insert(10);
    list.show();
    
    cout<<list.head<<endl;
    cout<<list.tail<<endl;
    cout<<list.head->next<<endl;
    cout<<list.tail->prev<<endl;
    return 0;
    
}
#include "auto_sort.hpp"
#include <iostream>
#include <cstdlib>
using std::cout;
using std::endl;


int main(){
    srand(time(NULL));
    linked_list *list = new linked_list;
    // list->insert(10);
    // list->insert(5);
    // list->insert(7);
    // list->insert(8);
    // list->insert(4);
    // list->insert(9);
    // list->insert(15);
    // list->insert(13);

    // list->show();
    
    // cout<<list->head<<endl;
    // cout<<list->tail<<endl;
    // cout<<list->head->next<<endl;
    // cout<<list->tail->prev<<endl;

    for(int i = 0; i < 10; i++)
    {
        list->insert(rand() % 100 -50);
    }
    list->show();

    return 0;
    
}
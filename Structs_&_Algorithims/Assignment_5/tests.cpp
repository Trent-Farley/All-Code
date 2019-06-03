#include <iostream>
#include "tree.hpp"
#include <cstdlib>
using std::cout; 
using std::endl;
Tree tree;
void test_insert(){
    srand(time(NULL));
    for(int i = 0; i < 12; i++){
        int random = rand() % 100 - 30;
        tree.insert(random);
    } 
    for(int i = 0; i < 5; i++){
        tree.insert(i);
    }
    cout<<"Inserted some nodes, will be printed now"<<endl; 
}
void print_stuff(){
    cout<<endl;
    cout<<"Inorder: "<<endl;
    tree.print_inorder();
    cout<<endl;
    cout<<"Press enter to continue to  postorder"<<endl;
    getchar();
    tree.print_postorder();
    cout<<endl;
    cout<<"Press enter to continue to  preorder"<<endl;
    getchar();
    tree.print_preorder();
    cout<<endl;
    cout<<"Everything is printed, hit enter to continue"<<endl;
    getchar();
}
void test_remove(){
    for(int i = 0; i < 4; i++){
        tree.remove(i);
        cout<<"Removing == "<<i<<endl;
    } 
}
void all_tests(){
    test_insert();
    print_stuff();
    test_remove();
    print_stuff();
    cout<<endl;
    cout<<"All tests have been ran, goodbye"<<endl;
}
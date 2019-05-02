#include <iostream>
#include "./link_list.hpp"
using std::cout;
using std::endl; 
linked_list list;
void show(struct node* head) 
{ 
    while (head!=nullptr) { 
        cout << "->" << head->val; 
        head = head->next; 
    } 
    cout << endl; 
    

} 

void test_create(){
    for(int i=0; i<11; i++){
        list.insert_pos(&list.head,i,i);
        
    }
    cout<<"Created "<<10<<" nodes:"<<endl;
    show(list.head);
}
void test_pos(){

    for(int i=6; i<12; i++){
        list.insert_pos(&list.head,2,i);    
    }
    cout<<"Inserted 6 nodes: "<<endl;
    show(list.head);

}
void test_rem(){
    for(int i = 1; i<=7; i++){
        list.remove(list.head, i);
    }
    cout<<"Deleted 6 nodes: "<<endl;
    show(list.head);

}
void t_show_pos(){
    cout<<"Positons:"<<endl;
    for(int i = 1; i<=7; i++){
        cout<<" Pos "<<i<<" >> "<<list.get_val(list.head, i);
    }
    cout<<endl;
}

void all_tests(){
    test_create();
    test_pos();
    test_rem();
    t_show_pos();
}

void bad_create(){
    for(int i=20; i<22; i++){
        int bad_num = list.insert_pos(&list.head,2,i);    
        if(bad_num==10){
            cout<<"Tried inserting at "<<i<<" but was denied"<<endl;
        }
    
    }
    for(int i=0.7; i<1; i=i+0.1){
        int bad_num = list.insert_pos(&list.head,2,i);    
        if(bad_num==10){
            cout<<"Tried creating at "<<i<<" but was denied"<<endl;
        }
    
    }
}

void bad_rem(){
    
    for(int i=20; i<22; i++){
        int bad_num = list.remove(list.head,i);    
        if(bad_num == 10){
            cout<<"Tried removing at "<<i<<" but was denied"<<endl;
        }
    }
    for(double i=0.7; i<1.0; i=i+0.1){
        int bad_num = list.remove(list.head,i);    
        if(bad_num==10){
            cout<<"Tried removing at "<<i<<" but was denied"<<endl;
        }
    
    }
}
void bad_pos(){

    for(int i=20; i<22; i++){
        int bad_num = list.get_val(list.head,i);    
        if(bad_num==10){
            cout<<"Tried removing at "<<i<<" but was denied"<<endl;
        }
    
    }
    for(double i=0.7; i<1.0; i=i+0.1){
        int bad_num = list.get_val(list.head,i);    
        if(bad_num==10){
            cout<<"Tried removing at "<<i<<" but was denied"<<endl;
        }
    
    }
}
void bad_tests(){
    bad_create();
    bad_rem();
    bad_pos();
    
}
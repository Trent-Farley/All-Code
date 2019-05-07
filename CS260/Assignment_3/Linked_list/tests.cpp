#include <iostream>
#include "./link_list.hpp"
using std::cout;
using std::endl; 
linked_list list;
//Show the current list, all in one line. That took a few seconds to 
//think about 
void show(struct node* head) {
 
    while (head!=nullptr) { 
        cout << "->" << head->val; 
        head = head->next; 
    } 
    cout << endl; 
    

} 

void test_create(){
    //I initially reused my add_nodes from the last one but
    //I changed it so it doesnt run like it used to. 
    //Nodes now have to have a positon to be inserted, which 
    //satisfies this asignment but I could make iit a standalone function
    //again. 
    for(int i=0; i<11; i++){
        list.insert_pos(&list.head,i,i);
        
    }
    cout<<"Created "<<10<<" nodes:"<<endl;
    show(list.head);
}
void test_pos(){
    //Positon was REALLY easy since I already made the while loop for 
    //the remove function. 

    for(int i=6; i<12; i++){
        list.insert_pos(&list.head,2,i);    
    }
    cout<<"Inserted 6 nodes: "<<endl;
    show(list.head);

}
void test_rem(){
    //This was TOUGH, I did not want to have a prev, so I decided that 
    //I will stop at a position before 
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
//One to rule all the good ones.
void all_tests(){
    test_create();
    cout<<"Press any key to run next test"<<endl;
    getchar();
    test_pos();
    cout<<"Press any key to run next test"<<endl;
    getchar();
    test_rem();
    cout<<"Press any key to run next test"<<endl;
    getchar();
    t_show_pos();
}

void bad_create(){
    for(int i=20; i<22; i++){
        int bad_num = list.insert_pos(&list.head,i,i);    
        if(bad_num==10){
            cout<<"Tried creating at "<<i<<" but was denied"<<endl;
        }
    
    }
    for(int i=1; i>-2; i--){
        int bad_num = list.insert_pos(&list.head,i,i);    
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
    for(int i=1; i>-2; i--){
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
            cout<<"Tried getting value at "<<i<<" but was denied"<<endl;
        }
    
    }
    for(int i=0; i>-2; i--){
        int bad_num = list.get_val(list.head,i);    
        if(bad_num == 10){
            cout<<"Tried getting value at "<<i<<" but was denied"<<endl;
        }
    
    }
}
//One to rule all the bad tests
void bad_tests(){
    bad_create();
    cout<<"Press any key to run next test"<<endl;
    getchar();
    bad_rem();
    cout<<"Press any key to run next test"<<endl;
    getchar();
    bad_pos();
    cout<<"Everything has been tested"<<endl;
}

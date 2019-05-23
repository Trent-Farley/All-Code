#include <iostream>

using std::cout;
using std::endl;

struct node{
    int val;
    struct node *next;
    struct node *prev;
    
};


class linked_list{
    public:
        node *head, *tail;
        int size = 0;
        linked_list(){
            head = new node;//Creating blank node
            head->val = -1; //not necessary?
            tail = new node;//Blank tail node
            head->val = -2; //not necessary?
            head->next = tail;
            tail->prev = head; 
        }
    void show() {
        node *pointer;
        if(head->next == nullptr){
            cout<<"Empty as my soul"<<endl;
        }
        else{
            pointer = head->next;
            for(int i= 0; i<size; i++){
                cout<<pointer->val<<endl;
                if(pointer->next){
                    pointer = pointer->next;
                }
            }
        }
        // while (size>0) { 
        //     cout << "->" << curr->val; 
        //     curr = curr->next; 
        //     size--;
        // } 
        // cout << endl; 
    

} 
        
    node *create(int value){
        node *new_node = new node;
        new_node->val = value;
        new_node->next = nullptr;
        new_node->prev = nullptr; 
        return new_node;
    }

    int insert(int data){
        int i = 0;
        node *new_node = create(data);
        node *curr;
        curr = head;
        if(size == 0){
            head->next = new_node;
            new_node->prev = head;
            new_node->next = tail;
            tail->prev = new_node;
            size++;
            return size;
        }
        else{
            while(i<=size){
                
                if(new_node->val <= curr->next->val || i == size){
                    new_node->next = curr->next;
                    new_node->prev = curr; 
                    curr->next->prev = new_node;
                    curr->next = new_node;
                    break;        
                }

                else{
                    curr = curr->next;
                }
                i++;
            
            }
            
        }
    return size++;
}

    int get_val(node *curr, int pos){

        if(pos < 1 || pos>size +1 ){
            return 10;
        }
        while(pos--){
            if(pos==0){
                return curr->val;
            }
            else{
                curr = curr->next;
            }
        }
    }

    // int remove(node *curr, int pos){
    //     if(pos < 1 || pos>size +1 ){
    //         return 10;
    //     }
    //     else{
    //         while(true){
    //             if(curr == nullptr){
    //                 cout << "end of list...";
    //                 return curr;
    //             }
    //             else if(curr != nullptr && curr->val > value){
    //                 node *temp = create(value);
    //                 temp->next = curr;
    //                 curr = temp;
    //                 return curr;
    //             }
    //             else{
    //                 curr = curr->next;
    //             }
    //         }
    //             size++;
    //     }
    // }
    
};
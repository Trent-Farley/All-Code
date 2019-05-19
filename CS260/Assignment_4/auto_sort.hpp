#include <iostream>

using std::cout;
using std::endl;

struct node{
    int val;
    struct node *next;
    
};


class linked_list{
    public:
        node *head, *tail;
        int size = 0;
        linked_list(){
            head = nullptr;
            tail = nullptr;
        }
        
    node *create(int value){
        node *new_node = new node;
        new_node->val = value;
        new_node->next = nullptr;
        return new_node;
    }

    node *insert(node *curr, int value){
        //int pos = value+1; 

        /*if(pos < 1 || pos>size +1 ){
            return 44;
        }
        */
       if(head == nullptr){
                cout << "nullptr, value entered: " << value << endl;
                node *temp = create(value);
                temp->next = curr;
                head = temp;
                return curr;     
        }
        else{
            while(true){
                if(curr == nullptr){
                    cout << "end of list...";
                    return curr;
                }
                else if(curr != nullptr && curr->val > value){
                    node *temp = create(value);
                    temp->next = curr;
                    curr = temp;
                    return curr;
                }
                else{
                    curr = curr->next;
                }
            }
                size++;
        }
    }

};
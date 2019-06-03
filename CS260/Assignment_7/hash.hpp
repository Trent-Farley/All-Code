#include <iostream>
using std::cout;
using std::endl;
struct node{
    int data;
    node *next;
    node *prev;
    };

class Hash_Table{
    private:
        //eexists automatically turns into true.
        bool exists = false;
        //Size gets changed in the array to see hwo big a linked list is. 
        int size[20];


    public:
        node **arr = new node*[20];
        node *head;
        node *tail;


    Hash_Table(){
        //I dont know if I need any of this, but it works with it. 
        head = new node;
        tail = new node;
        head->next = NULL;
        head->prev = NULL;
        tail->prev = NULL;
        tail->next = NULL;
        head->data = 1;
        tail->data = 1;
        for(int i = 0; i<20; i++){
            size[i] = 0;
        }

    }
    node *create(int val){
        //I think I have used this function in every assignment so far, but 
        //this just creates nodes.
        node *new_node = new node;
        new_node->next = NULL;
        new_node->prev = NULL;
        new_node->data = val;
        return new_node;
    }

    int *linked_list(int data){
        //Stolen from auto sort, but changed so its "New"
        //Thought about making a stack, but could not get it working for some reason. 
        int i = 0;
        int pos = data;
        
        if(pos > 19 ){
            pos = 19;
        }
        else if(pos<1){
            pos = 1; 
        }
        //check for boundary and fix if necessary   

        node *new_node = create(data);
        node *curr;

        curr = arr[pos];
        if(size[pos] == 0){
            curr->next = new_node;
            new_node->prev = curr;
            new_node->next = NULL;
            
            size[pos]++;
            return size;
        }
        else{
            while(i<=pos){
    
                
                if(curr->next == NULL || new_node->data <= curr->next->data){
                    new_node->next = curr->next;
                    new_node->prev = curr;
                    if(curr->next!=NULL){
                    curr->next->prev = new_node;
                    }
                    curr->next = new_node;
                    i=pos+1;
                    
                        
                }

                else{
                    curr = curr->next;
                }
                i++;
            
            }
            size[pos]++;
            return size;  
        }

    }
    node **find_and_put(int val){
        //Main putting in function, just puts in value into linked list or arr
        if(val>=20){
            if(arr[20]->data != 0){
                linked_list(val);
            }
            else{
                arr[20] = create(val);
            }
            return arr;
        }

        else if(exists == false){
            for(int i = 0; i<20; i++){
                arr[i] = create(0);
            }
            exists = true;
            if(val<20){
                arr[val]->data = val;
                return arr;
            }


        } 
        else if(val<=0){
            
            if(arr[0]->data != 0){

                linked_list(val);
            }
            else{

                arr[0] = create(val);
            }
            return arr;
        } 

        else if(arr[val]->data==0){
            arr[val] = create(val);
            return arr;
        }
        else if(val == arr[val]->data){
            linked_list(val);
            return arr;
        }

        else{
            arr[val] = create(val);
            return arr;
        }

    }
    bool find(int val){
        //Returns true or false depending if the value is in the table
        int pos = val;
        if(val>20){
            pos = 20;
        }
        else if(pos<0){
            pos = 0;
        }

        else if(arr[pos]->data == 0){
            return false;
        }
        else if(arr[pos]->data == val){
            return true;
        }
        else{
            return false; 
        }
        
    }
    };


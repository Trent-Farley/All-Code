struct node{
    int data;
    node *next;
    node *prev;
};

class Hash_Table{
    private:
        bool exists = false;
        int size[20];

        
    public: 
        node **arr = new node*[20];
        node *head;
        node *tail;
        

        Hash_Table(){
            head = new node;
            tail = new node;
            head->next = NULL;
            head->prev = NULL;
            tail->prev = NULL;
            tail->next = NULL;
            head->data = 1;
            tail->data = 1;
            for(int i = 0; i<21; i++){
                size[i] = 0;
            }

        }
        node *create(int val){
            node *new_node = new node;
            new_node->next = NULL;
            new_node->prev = NULL;
            new_node->data = val;
            return new_node;
        }

        int *linked_list(int data){
            int i = 0;
            int pos = data;
            node *new_node = create(data);
            node *curr;
            curr = head;
            if(size[0] == 0){
                head->next = new_node;
                new_node->prev = head;
                new_node->next = tail;
                tail->prev = new_node;
                size[0] = 1;
                return size;
            }
            else{
                while(i<=pos){
                    
                    if(new_node->data <= curr->next->data || i == 20){
                        new_node->next = curr->next;
                        new_node->prev = curr; 
                        curr->next->prev = new_node;
                        curr->next = new_node;
                        i=pos;
                        
                            
                    }

                    else{
                        curr = curr->next;
                    }
                    i++;
                
                }

            }
            size[pos]++;
            return size;     
        }
        node **find_and_put(int val){
            if(exists == false){
                for(int i = 0; i<21; i++){
                    arr[i] = create(0);
                }
                arr[0]->data = 1;
                arr[20]->data = 1;
            }
                
            
                exists = true;
                if(val == 0){
                    arr[val+1] = create(val);
                    return arr;
                }
                if(val == arr[val]->data){
                    linked_list(val);
                }
                else{
                    arr[val] = create(val);
                    return arr;
                }
            }



            else{
                arr[val] = create(val);
                return arr;
            }

    }

};
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
            node *head = new node;//Creating blank node
            node *tail = new node;//Blank tail node
            head->next = tail;
            tail->prev = head; 
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
        if(head->next == tail){
            head->next = new_node;
            new_node ->prev = head;
            new_node->next = tail; 
            tail->prev = new_node;
        }
        else{
            while{i<size+1){
                
                
                if(new_node->val <= curr->next->val){
                    new_node->next = curr->next;
                    new_node->prev = curr; 
                    curr->next->prev = new_node;
                    curr->next = new_node;
                    
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

    int remove(node *curr, int pos){
        if(pos < 1 || pos>size +1 ){
            return 10;
        }
        else{
            while(pos!=1){
                pos--;
                if(pos == 1){
                        
                        node *temp = new node;
                        temp = curr->next;
                        curr->next = curr->next->next;
                        int returned = curr->val;
                        delete temp;
                        return returned;
                    
                }
                else{
                    curr = curr->next;
                }
            }
            size--;
        }
    }

};
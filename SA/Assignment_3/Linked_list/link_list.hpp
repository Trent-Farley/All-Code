
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

    int insert_pos(node **curr, int pos,int data){
        //double node pointer to point to the next next imstead of 
        // using a prev. Pointer to a pointer, which will justskim over 
        //everything
        if(pos < 1 || pos>size +1 ){
            return 10;
        }
        else{

            while(pos--){
                if(pos == 0){
                    node *temp = create(data);
                    temp->next = *curr;
                    *curr = temp;
                }
                else{
                    curr = &(*curr)->next;
                }
            }
            size++;
        }
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
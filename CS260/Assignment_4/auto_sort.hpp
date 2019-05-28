
struct node{
    int val;
    struct node *next;
    struct node *prev;
    
};


class linked_list{
    public:
        node *head, *tail;
        int size;
        linked_list(){
            head = new node;//Creating blank node
            head->val = -1; //not necessary?
            tail = new node;//Blank tail node
            head->val = -2; //not necessary?
            head->next = tail;
            tail->prev = head; 
            size = 0;
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
                    i=size;
                          
                }

                else{
                    curr = curr->next;
                }
                i++;
            
            }
            
        }
    return size++;
}

    int get_val(int val){
        node *curr = head;
        int i = size;
        if(size == 0){  
            return -1;
        }
        else if(i>0){
            while(i--){
                if(curr->val == val){
                    return curr->val;
                }
                else{
                    curr = curr->next;
                }
            }
        }
        else{
            return -1;
        }
    }

    int remove(int data){
        
        int i = 0;
        node *curr;
        curr = head;
        if(size == 0){
            
            return -1;
        }
      
        
        while(i<=size){

            if(curr->val==data){
          
                curr->prev->next = curr->next;
                curr->next->prev = curr->prev;
                int val = curr->val;
                size--;
                delete curr;
                return val;

            }

            else{
  
                curr = curr->next;
            }
            i++;
            
        }
    }
    
};
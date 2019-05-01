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
        
        void add_nodes();
        void front();
    
    node *create(int value){
        node *new_node = new node;
        new_node->val = value;
        new_node->next = nullptr;
        return new_node;
    }

    int insert_pos(node **curr, int pos,int data){
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

   

    node *get_head(){
        return head;
    }

    void front(int number){
        node *temp = new node;
        temp->val = number;
        temp->next = head;
        head = temp;
    }

    void remove(node *del){
        node* temp = del;

        if(del != nullptr){
            delete del;
            head = temp->next;
        }

    }

};
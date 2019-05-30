struct node{
    int data;
    node *next;
    node *prev;
};

class Hash_Table{
    private:
    bool exists = false;

    public: 
        node **arr = new node*[20];
        node *head;
        node *tail;

        Hash_Table(){
            head = new node;
            tail = new node;
            head->next = tail;
            head->prev = NULL;
            tail->prev = head;
            tail->next = NULL;
            arr[0] = head; 
            arr[20] = tail; 

        }
        node *create(int val){
            node *new_node = new node;
            new_node->next = NULL;
            new_node->prev = NULL;
            new_node->data = val;
            return new_node;
        }
        node **find_and_put(int val){

            for(int i = 0; i<20; i++){
                arr[i] = create(i);
            }
            exists = true;
            return arr;
    }

};
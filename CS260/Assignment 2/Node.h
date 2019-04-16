struct node{
    int num;
    node *next;

};
class linked_list{
    private:
        node *head, *tail;
    public:
        linked_list(){
            head = nullptr;
            tail = nullptr;
        }
        
        void add_nodes();
        void front();

    void add_nodes(int number){

        node *temp = new node;
        temp->num = number;
        temp->next = nullptr;

        if(head == nullptr){
            head = temp;
            tail = temp;
        }
        else {
            tail->next = temp;
            tail = tail->next;
        }
    }

    node *get_head(){
        return head;
    }

    void front(int number){
        node *temp = new node;
        temp -> num = number;
        temp -> next = head;
        head = temp;
    }

    node *remove(node *before_del){
        node* temp;
        temp = before_del->next;
        node *returned = temp;
        before_del->next = temp->next;
        delete temp;
        return returned;
    }
};
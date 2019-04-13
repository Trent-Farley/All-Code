class node
{
    public:
        int value;
        int nex_val;
        node *next;
        node();
        node(int new_value, node *new_next);
        int get_value();
        void set_value(int new_val);
};



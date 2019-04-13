#include "node.hpp"
  
//implementation of Node
node::node()
{
        value = 0;
        nex_val = 0;
        next = nullptr;
}

node::node(int new_value, node *new_next)
{
        value = new_value;
        next = new_next;
}

//getter for value variable, not strictly require since value is publically accessible
int node::get_value()
{
        return value;
}


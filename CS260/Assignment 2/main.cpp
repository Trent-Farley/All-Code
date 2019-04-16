#include <iostream>
#include "Node.h"

using std::cout;
using std::endl;
using std::cin;

void display(node *head){

    if(head == nullptr)
    {
        cout << "NULL" << endl;
    }
    else
    {
        cout << head->num << endl;
        display(head->next);
    }
}

int main()
{
    linked_list linked;
    int menu, choice = 0;
    while(menu != 0){
        cout << "Lets make a stack!\n\
1. Add a node\n\
2. Display front\n\
3. Display all nodes\n\
4. Remove current head\n\
5. Exit program"<<endl; 
        cin>>choice;
        switch (choice)
        {
            case 1:
                int n_val;
                cout<<"Please enter a value"<<endl;
                cin>>n_val;
                linked.add_nodes(n_val);
                cout<<"Got it current stack is:"<<endl;
                display(linked.get_head());
                break;
            
            case 2:
                cout<<"Here is the current head"<<endl;
                cout<<linked.get_head()<<endl;
                break;
            
            case 3:
                display(linked.get_head());
                break;
            
            case 4:
                node *returned = linked.remove(linked.get_head());
                cout<<"Head removed, but the value has been popped:\n\
                value of head: "<< returned <<endl;
                break;

        }
    }
    return 0;
}
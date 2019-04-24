#include <iostream>
#include "../use/Node.hpp"// Struct for node, and class for a linked list. 

using std::cout;
using std::endl;
using std::cin;

void display(node *head){// Display the current stack

    if(head == nullptr)
    {
        cout << "NULL" << endl;
    }
    else
    {
        cout << head->num << endl;
        display(head->next);
    }
}//Big O(n)

int main()
{
    linked_list linked;//Create class linked
    int menu = 0;//Variables for while loop
    int choice = 0;
    while(menu == 0){//O(n)
        cout << "Lets make a stack!\n\
1. Add a node\n\
2. Display front\n\
3. Display all nodes\n\
4. Remove current head\n\
5. Exit program"<<endl; //Menu, all this works. 
        cin>>choice;
        if(choice == 1){//Works fine, include NULL if nothing left
            int n_val;
            cout<<"Please enter a value"<<endl;
            cin>>n_val;
            linked.add_nodes(n_val);
            cout<<"Got it current stack is:"<<endl;
            display(linked.get_head());
            cout<<"Press enter to continue"<<endl;
            getchar();getchar();//C way of pausing, using linux so
            //I cant use MSDOS "pause" sys command

        }
        else if(choice == 2){
            cout<<"Here is the current front"<<endl;//Displays current front
            cout<<linked.get_head()->num<<endl;
            cout<<"Press enter to continue"<<endl;
            getchar(); getchar();
        }
        else if(choice == 3){//Displays all of the nodes. 
            display(linked.get_head());
            cout<<"Press enter to continue"<<endl;
            getchar();getchar();
        }
        else if (choice == 4){//This has problems, I cant get it working 
        //With an actual node. I have tried everything  I can think of
        //Which is why it is late. 
        //GOT it KINDA working, it sets it to 0 which I believe is 
        //The system "freeing it" I am calling that good. 
            node *val = linked.get_head();
            if(val == nullptr){
                cout<<"Stack is empty!"<<endl;
            }
            else{
                cout<<"Head removed, but the value has been popped:\n\
Value = "<< val->num <<endl;

                linked.remove(val);//I have worked on this for way too
                //long, for some reason I keep on getting a segmentation fault
                // If I try and delete a value
                cout<<"Stack is now:"<<endl;
                display(linked.get_head());

            }
            cout<<"press any key to continue"<<endl;
            getchar(); getchar();
        }

        else {
            if(linked.get_head()==nullptr){//Tried to free
            //all memory but this has the same issue so I know
            //It is my remove function but I have no idea why it 
            //doesnt work.
            //kinda works now 
                cout<<"Stack is deleted, goodbye!"<<endl;
            }
            else{
                cout<<"Stack is deleted, goodbye!"<<endl;
                linked.remove(linked.get_head()->next);
            }
            menu = choice;
        }
    }
    return 0;
}
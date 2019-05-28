#include <iostream>
#include <cstdlib>
using std::cout;
class tree{
    private:
        struct tree_node
        {
           tree_node* left;
           tree_node* right;
           int data;
        };
        tree_node* root;
    
    public:
        tree()
        {
           root = NULL; //Started Using NULL because it makes more sense
        }
       
        bool isEmpty() const {
             return root== NULL;
        }
        void print_inorder();
        void inorder(tree_node*);
        void print_preorder();
        void preorder(tree_node*);
        void print_postorder();
        void postorder(tree_node*);
        void insert(int);
        void remove(int);
};

// Smaller elements go left
// larger elements go right
void tree::insert(int d)
{
    tree_node* tree = new tree_node;
    tree_node* parent;
    tree->data = d;
    tree->left = NULL;
    tree->right = NULL;
    parent = NULL;
    
    // is this a new tree?
    if(isEmpty()) root = t;
    else
    {
        //Note: ALL insertions are as leaf nodes
        tree_node* curr;
        curr = root;
        // Find the Node's parent
        while(curr)
        {
            parent = curr;
            if(tree->data > curr->data) curr = curr->right;
            else curr = curr->left;
        }

        if(tree->data < parent->data)
           parent->left = t;
        else
           parent->right = t;
    }
}

void tree::remove(int num)
{
    //Locate the element
    bool found = false;
    if(isEmpty())
    {
        cout<<" this tree is empty! "<<endl;
        return;
    }
    
    tree_node* curr;
    tree_node* parent;
    curr = root;
    
    while(curr != NULL)
    {
         if(curr->data == num)
         {
            found = true;
            break;
         }
         else
         {
             parent = curr;
             if(num>curr->data) curr = curr->right;
             else curr = curr->left;
         }
    }
    if(!found)
		 {
        cout<<" Data not found! "<<endl;
        return;
    }


    /* 3 Cases:
        Leaf Node
        Single child
        Two children
    */
    //Node with single chld... I dont like this. 
    if((curr->left == NULL && curr->right != NULL)|| (curr->left != NULL \
    && curr->right == NULL))
    {
       if(curr->left == NULL && curr->right != NULL)
       {
           if(parent->left == curr)
           {
             parent->left = curr->right;
             delete curr;
           }
           else
           {
             parent->right = curr->right;
             delete curr;
           }
       }
       else // left child present, no right child
       {
          if(parent->left == curr)
           {
             parent->left = curr->left;
             delete curr;
           }
           else
           {
             parent->right = curr->left;
             delete curr;
           }
       }
     return;
    }

		 //leaf node
		 if( curr->left == NULL && curr->right == NULL)
    {
        if(parent->left == curr) parent->left = NULL;
        else parent->right = NULL;
		 		 delete curr;
		 		 return;
    }


    //Node with 2 children
    // replace node with smallest value in right tree
    if (curr->left != NULL && curr->right != NULL)
    {
        tree_node* check;
        check = curr->right;
        if((check->left == NULL) && (check->right == NULL))
        {
            curr = check;
            delete check;
            curr->right = NULL;
        }
        else // right child has children
        {
            //Go to left if the right child has a left child.
            if((curr->right)->left != NULL)
            {
                tree_node* lcurr;
                tree_node* lcurrp;
                lcurrp = curr->right;
                lcurr = (curr->right)->left;
                while(lcurr->left != NULL)
                {
                   lcurrp = lcurr;
                   lcurr = lcurr->left;
                }
		curr->data = lcurr->data;
                delete lcurr;
                lcurrp->left = NULL;
           }
           else
           {
               tree_node* tmp;
               tmp = curr->right;
               curr->data = tmp->data;
	        curr->right = tmp->right;
               delete tmp;
           }

        }
		 return;
    }

}

void tree::print_inorder()
{
  inorder(root);
}

void tree::inorder(tree_node* p)
{
    if(p != NULL)
    {
        if(p->left) inorder(p->left);
        cout<<" "<<p->data<<" ";
        if(p->right) inorder(p->right);
    }
    else return;
}

void tree::print_preorder()
{
    preorder(root);
}

void tree::preorder(tree_node* p)
{
    if(p != NULL)
    {
        cout<<" "<<p->data<<" ";
        if(p->left) preorder(p->left);
        if(p->right) preorder(p->right);
    }
    else return;
}

void tree::print_postorder()
{
    postorder(root);
}

void tree::postorder(tree_node* p)
{
    if(p != NULL)
    {
        if(p->left) postorder(p->left);
        if(p->right) postorder(p->right);
        cout<<" "<<p->data<<" ";
    }
    else return;
}


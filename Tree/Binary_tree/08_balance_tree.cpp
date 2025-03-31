#include <iostream>
using namespace std;
class node
{
    public:  // declaring data and left and right pointers as public for simplicity 
    int data;
    node*left,*right;
    node(int value)
    {
        data=value;
        left=right=nullptr;
    }
};
int height(node*root)
{
    if (!root)
    {
        return 0;
    }
    // yehi se check karenge ki kaunsa balance hai 
    int left_height=height(root->left);
    // left subtree is unbalanced 
    if (left_height==-1)
    {
        return -1;
    }

    // right subtree is unbalanced 
    int right_height=height(root->right);
    if (right_height==-1)
    {
        return -1;
    }
    // current node is unbalanced 
    if (abs(left_height-right_height)>1)
    {
        return -1;
    }
    return max(left_height,right_height)+1; 
}
bool isBlance(node*root)
{
    return height(root)!=-1;  // return true if tree is balanced else false

}


int main()
{
    // creating node individualy 
    node*root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    // yahan simply treee create ho jata hai 
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->right->right=new node(6);
    root->left->left->left=new node(7);
    if (isBlance(root))
    {
        cout<<"Tree is balanced"; 
    }
    else
    cout <<"Tree is not balanced" <<endl;
    
    
    


    return 0;
}

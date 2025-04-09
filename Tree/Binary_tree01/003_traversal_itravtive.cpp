#include <iostream>
#include <stack>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;
    node(int value) : data(value), left(nullptr), right(nullptr) {}
};
// crating a tree 
node*tree()
{
    int value;
    cout<<"Entr the root :(-1 to stop)";
    cin>>value;
    if (value==-1)
        return nullptr;
    
    node*temp=new node(value);
    cout<<"Enetr the left child of "<<temp->data;
    temp->left=tree();
    cout<<"Enetr the right child of "<<temp->data;
    temp->right=tree();    
}
void Preorder(node *root)
{
    if (root == nullptr)
        return;
    stack<node *> st;
    st.push(root);
    while (!st.empty())
    {
        node *temp = st.top();
        st.pop();
        cout << temp->data << " " << endl;              //visit the node 
        if (temp->right)
        {
            st.push(temp->right);
        }
        if (temp->left)
        {
            st.push(temp->left);
        }
    }
}

int main()
{
    node*root=nullptr;
    root=tree();
    Preorder(root);
    return 0;
}
<<<<<<< HEAD
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;
    node(int value)
    {
        data = value;
        left = right = nullptr;
    }
};
node *create_node()
{
    int value;
    cin >> value;
    if (value == -1)
    {
        return nullptr;
    }
    node *temp = new node(value);
    cout << "Enter the left node of" << temp->data;
    temp->left = create_node();

    cout << "Enter the right node of" << temp->data;
    temp->right = create_node();
}

void size_of_tree(node*root,int &count)
{
    if (root==nullptr)
    {
        return ;
    }
    count++;
    size_of_tree(root->left,count);
    size_of_tree(root->right,count);
    
}

// yehan pe node nahi return hoga yahan int return hoga n 
// node *size_of_tree(node *root)
// {
//     if (root == nullptr)
//     {
//         return nullptr;
//     }

//     return 1 + size_of_tree(root->left) + size_of_tree(root->right);
// }
void preorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    node *root;
    root = create_node();
    cout<<"preorder traversal:";
    preorder(root);
    int count=0;
    
    size_of_tree(root,count);
    cout <<"\nTrre size" <<count;
    return 0;
=======
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;
    node(int value)
    {
        data = value;
        left = right = nullptr;
    }
};
node *create_node()
{
    int value;
    cin >> value;
    if (value == -1)
    {
        return nullptr;
    }
    node *temp = new node(value);
    cout << "Enter the left node of" << temp->data;
    temp->left = create_node();

    cout << "Enter the right node of" << temp->data;
    temp->right = create_node();
}

void size_of_tree(node*root,int &count)
{
    if (root==nullptr)
    {
        return ;
    }
    count++;
    size_of_tree(root->left,count);
    size_of_tree(root->right,count);
    
}

// yehan pe node nahi return hoga yahan int return hoga n 
// node *size_of_tree(node *root)
// {
//     if (root == nullptr)
//     {
//         return nullptr;
//     }

//     return 1 + size_of_tree(root->left) + size_of_tree(root->right);
// }
void preorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    node *root;
    root = create_node();
    cout<<"preorder traversal:";
    preorder(root);
    int count=0;
    
    size_of_tree(root,count);
    cout <<"\nTrre size" <<count;
    return 0;
>>>>>>> 0594d8b69cc8e47b8274b7c8b99cda6c36fed014
}
#include <iostream>
using namespace std;
class node
{
public: // declaring data and left and right pointers as public for simplicity
    int data;
    node *left, *right;
    node(int value)
    {
        data = value;
        left = right = nullptr;
    }
};
// creating node of the tree
node *binary_tree()
{
    int value;
    cout << "Enter root node : ";
    cin >> value;
    node *root = new node(value);
    if (value == -1)
    {
        return nullptr;
    }
    cout << "Enter the left child of " << root->data;
    root->left = binary_tree();
    cout << "Enter the right child of " << root->data; // creating right child recursively for the root node.
    root->right = binary_tree();
    return root;
}
void preorder(const node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void Inorder(const node *root)
{
    if (root == NULL)
    {
        return;
    }

    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}
void Postorder(const node *root)
{
    if (root == NULL)

    {
        return;
    }

    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    // creating binary tree

    node *root = binary_tree();
    // printing the binary tree in preorder traversal
    cout << "Preorder:";
    preorder(root);
    cout << "Inorder:";
    Inorder(root);
    cout << "Postorder:";
    Postorder(root);
    return 0;
}
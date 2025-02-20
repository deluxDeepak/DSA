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

node *binary_tree()
{
    int value;
    cout << " -Enter the value (-1 for nno node ):";
    cin >> value;
    if (value == -1)
    {
        return nullptr;
    }
    node *temp = new node(value);

    cout << "Enter the left node of " << temp->data;
    temp->left = binary_tree(); // return karega osko left ko bhej denge aur store kar lenge

    cout << "Enter the right node of " << temp->data;
    temp->right = binary_tree();

    // and return bhi karna prega
    return temp;
}
void preorder(node *&root)
{
    if (root == nullptr)
    {
        return;
    }

    // print the root node
    cout << root->data << " ";

    // go the left of the node
    preorder(root->left);

    // go the right of the node
    preorder(root->right);
}
void postorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }

    // left me jayenge
    postorder(root->left);

    // right me jayenge
    postorder(root->right);
    cout << root->data << " ";
}
void inorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    // left me jayega
    inorder(root->left);

    // node print karenge
    cout << root->data << " ";

    // right me jayega
    inorder(root->right);
}
int main()
{
    node *root;
    // left to right create karega tree
    root = binary_tree();

    // preorder display karega
    cout << "Preorder traversal :";
    preorder(root);

    // postorder display karega
    cout << "Postorder traversal :";
    postorder(root);

    // inorder display karega
    cout << "Inorder traversal :" ;
    inorder(root);
    return 0;
}
#include <iostream>
using namespace std;
// Avl tree
class node
{
public:
    int data, height;
    node *left, *right;
    node(int value)
    {
        data = value;
        height = 1;
        left = right = nullptr;
    }
};
// get height of the tree
int height(node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    return root->height;
}
// get balance factor of node
int getBalance(node *root)
{
    if (root == nullptr)
        return 0;
    return height(root->left) - height(root->right);
}
// find maximum of two numbers
int max(int a, int b)
{
    return (a > b) ? a : b;
}
// right rotate subtree rooted with y
node *rightRotate(node *root)
{
    node *child = root->left;
    node *childRight = child->right;
    child->right = root;
    root->left = childRight;

    // Updating the height
    root->height = 1 + max(height(root->left), height(root->right));
    child->height = 1 + max(height(child->left), height(child->right));
    return child;
}
// left rotate subtree rooted with x
node *leftRotate(node *root)
{
    node *child = root->right;
    node *childLeft = child->left;
    child->left = root;
    root->right = childLeft;

    // Updating the height
    root->height = 1 + max(height(root->left), height(root->right));
    child->height = 1 + max(height(child->left), height(child->right));
    return child;
}
node *insert(node *root, int key)
{
    // node not exist
    if (root == nullptr)
        return new node(key);
    // if node exist
    if (key < root->data)
        root->left = insert(root->left, key); // left subtree
    else if (key > root->data)
        root->right = insert(root->right, key); // right subtree
    else
        return root; // Dublicate element are not allowed

    // updating height of the subtree
    root->height = 1 + max(height(root->left), height(root->right));

    // get balance factor
    int balance = getBalance(root);
    // Left Left Case
    if (balance > 1 && key < root->left->data)
        return rightRotate(root);

    // Right Right Case
    else if (balance < -1 && key > root->right->data)
        return leftRotate(root);

    // Left Right Case
    else if (balance > 1 && key > root->left->data)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }

    // Right Left Case
    else if (balance < -1 && key < root->right->data)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
}
// Function to print the inorder traversal
void inorder(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    node *root = nullptr;
    root = insert(root, 9);
    root = insert(root, 5);
    root = insert(root, 10);
    root = insert(root, 0);
    root = insert(root, 6);

    cout << "Inorder traversal :";
    inorder(root);
    return 0;
}
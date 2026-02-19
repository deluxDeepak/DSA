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
    node *root = new node(value);

    cout << "Enter the left node of " << root->data << " ";
    root->left = create_node();

    cout << "Enter the right node of " << root->data << " ";
    root->right = create_node();
}
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

// void sum_of_tree(node *root, int &sum)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     sum = sum + root->data;
//     sum_of_tree(root->left, sum);
//     sum_of_tree(root->right, sum);
// }

int sum_of_tree(node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    return root->data + sum_of_tree(root->left) + sum_of_tree(root->right);
}
int main()
{
    node *root;
    root = create_node();

    cout << "Preorder traversal :";
    preorder(root);
    
    int sum = 0;

    cout <<"\nSum of binary tree : "<<sum_of_tree(root);
    // cout << "\nSum of binary tree :" << sum << endl;
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
    node *root = new node(value);

    cout << "Enter the left node of " << root->data << " ";
    root->left = create_node();

    cout << "Enter the right node of " << root->data << " ";
    root->right = create_node();
}
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

// void sum_of_tree(node *root, int &sum)
// {
//     if (root == nullptr)
//     {
//         return;
//     }
//     sum = sum + root->data;
//     sum_of_tree(root->left, sum);
//     sum_of_tree(root->right, sum);
// }

int sum_of_tree(node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    return root->data + sum_of_tree(root->left) + sum_of_tree(root->right);
}
int main()
{
    node *root;
    root = create_node();

    cout << "Preorder traversal :";
    preorder(root);
    
    int sum = 0;

    cout <<"\nSum of binary tree : "<<sum_of_tree(root);
    // cout << "\nSum of binary tree :" << sum << endl;
    return 0;
>>>>>>> 0594d8b69cc8e47b8274b7c8b99cda6c36fed014
}
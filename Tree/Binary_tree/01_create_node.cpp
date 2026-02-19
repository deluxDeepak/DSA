#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left, *right;
    node(int x) : data(x) {}
};

node *create_node(int value)
{
    node *temp = new node(value);
    temp->left = temp->right = nullptr;
    temp->data = value;
    return temp;
}

// Traversal to show the node
void preOrdertraversal(node *root)
{
    if (root == nullptr)
    {
        return;
    }

    cout << root->data << " ";
    preOrdertraversal(root->left);
    preOrdertraversal(root->right);
}

// Only first root ka children ka sum 
int sumChild(node *root)
{
    if (root == NULL)
        return 0;

    int sum = 0;
    if (root->left)
        sum += root->left->data;
    if (root->right)
        sum += root->right->data;

    return sum;
}

// Subtree sum 
int sumSubtree(node *root)
{
    if (root == NULL)
        return 0;

    return root->data+sumSubtree(root->left)+sumSubtree(root->right);
}

int main()
{
    node *root = create_node(40);
    root->left = create_node(42);
    // root->left->left = create_node(13);
    // root->left->left->left = create_node(54);
    // root->left->left->right = create_node(15);
    root->left->left=create_node(20);
    root->left->right=create_node(20);
    root->right = create_node(33);
    root->right->left=create_node(40);
    root->right->right=create_node(40);
    preOrdertraversal(root);

    cout <<"\n"<<sumChild(root);
    cout <<"\n"<<sumSubtree(root);
    return 0;
}
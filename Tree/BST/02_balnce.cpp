#include <iostream>
#include <algorithm>
using namespace std;

typedef struct node
{
    int data;
    node *left, *right;
    node(int value) : data(value), left(nullptr), right(nullptr) {}
} node;

int height(node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}

// calculating the node balance
void isBalnce(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    int left_val = height(root->left);
    int right_val = height(root->right);
    int bal_val = left_val - right_val;

    cout << "Node " << root->data << " balnce is " << bal_val << endl;

    isBalnce(root->left);
    isBalnce(root->right);
}
int main()
{
    node *root = nullptr;
    root = new node(45);
    root->left = new node(33);
    root->right = new node(44);
    root->left->left = new node(22);
    isBalnce(root);

    return 0;
}
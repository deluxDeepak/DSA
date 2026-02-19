#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;
    node(int value) : data(value), left(nullptr), right(nullptr) {}
};
// Height of the tree
int height(node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}
int main()
{
    node *root = nullptr;
    root = new node(45);
    root->left = new node(33);
    root->right = new node(44);

    cout << "Height of tree: " << height(root);
    return 0;
}
#include <iostream>
using namespace std;
class node
{
    public:
        int data;
        node* left, *right;
    node(int value):data(value),left(nullptr),right(nullptr) {}
};
// height of the tree 
int height(node* root)
{
    if (root==nullptr)
    {
        return 0;
    }
    return 1 + max(height(root->left),height(root->right));
}
int main()
{
    return 0;
}
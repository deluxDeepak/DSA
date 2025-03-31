// Given a binary tree and a key ,the task is to find the level of key in the Binary tree

#include <iostream>
#include <queue>
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

// function to find level of key in binary tree
int findLevel(node *root, int key)
{
    if (root == nullptr)
    {
        return -1;
    }
    queue<node *> q;
    q.push(root);
    int level = 0;
    while (!q.empty())
    {
        // size of the queue
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            node *temp = q.front();
            q.pop();
            if (temp->data == key)
                return level;

            if (temp->left)
                q.push(temp->left);

            if (temp->right)
                q.push(temp->right);
        }
        level++;
    }
    return -1; // key not found in tree
}
int main()
{
    // Let us construct the binary tree
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    int key = 4;
    cout << "Level of " << key << " is " << findLevel(root, key) << endl;

    key = 10;
    cout << "Level of " << key << " is " << findLevel(root, key) << endl;

    return 0;
}
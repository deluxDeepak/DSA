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
node *tree(node *root)
{
    if (root == nullptr)
    {
        return nullptr;
    }
    int value;
    cout << "Enter the root node";
    cin >> value;
    root = new node(value);
    cout << "Enter the left child of " << root->data;
    root->left = tree(root->left);
    cout << "Enter the right child of " << root->data;
    root->right = tree(root->right);
    return root;
}

// Traversal of tree(Lvel traversal )
void level_order(node *root)
{
    if (root == nullptr)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        cout << temp->data << " ";
        q.pop();
        if (temp->left != nullptr)
        {
            q.push(temp->left);
        }
        if (temp->right != nullptr)
        {
            q.push(temp->right);
        }
    }
}

// Height of the tree
// 1.Recursive
int height_recursive(node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    return 1 + max(height_recursive(root->left), height_recursive(root->right));
}

// 2. Iterative(node count hua so return karenge edges so height-1)
int height_iterative(node *root)
{
    if (root == nullptr)
    {
        return 0;
    }
    queue<node *> q;
    int height = 0;
    q.push(root);

    // loop until the queue is empty
    while (!q.empty())
    {
        int size = q.size();

        // node ko khali karo aur left right ko queueu me push karo
        for (int i = 0; i < size; i++)
        {
            node *curr = q.front();
            q.pop();
            if (curr->left != nullptr) // if(curr->next)
                q.push(curr->left);
            if (curr->right)
                q.push(curr->right);
        }
        height++;
    }
    return height - 1;
}
int main()
{
    node *root = nullptr;
    root = tree(root);
    level_order(root);
    cout << "\nHeight of the tree (recursive): " << height_recursive(root);
    cout << "\nHeight of the tree (iterative): " << height_iterative(root);
    return 0;
}
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
int main()
{
    node *root;
    root = binary_tree();
    return 0;
}
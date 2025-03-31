<<<<<<< HEAD
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
int main()
{
    int value, left, right;

    // implementation using quee
    queue<node *> q;
    // create node push into the que
    cout<<"Enter the root node :";
    cin>>value;
    node *root = new node(value);
    q.push(root);

    // condition for quee is not empty then appy the loop
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "Enter the left child of : "<<temp->data <<" ";
        cin >> left;
        if (left != -1)
        {
            
            temp->left = new node(left);
            // pushing the adress into the quee
            q.push(temp->left);
        }
        cout << "Enter the right child :" <<temp->data<<" ";
        cin >> right;
        if (right != -1)
        {
            temp->right = new node(right);
            // pushing the adress into the quee
            q.push(temp->right);
        }
    }

    return 0;
=======
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
int main()
{
    int value, left, right;

    // implementation using quee
    queue<node *> q;
    // create node push into the que
    cout<<"Enter the root node :";
    cin>>value;
    node *root = new node(value);
    q.push(root);

    // condition for quee is not empty then appy the loop
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        cout << "Enter the leaft child: ";
        cin >> left;
        if (left != -1)
        {
            temp->left = new node(left);
            // pushing the adress into the quee
            q.push(temp->left);
        }
        cout << "Enter the right child :";
        cin >> right;
        if (right != -1)
        {
            temp->right = new node(right);
            // pushing the adress into the quee
            q.push(temp->right);
        }
    }
    

    return 0;
>>>>>>> 0594d8b69cc8e47b8274b7c8b99cda6c36fed014
}
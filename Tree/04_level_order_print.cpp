#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;
    node(int vlaue)
    {
        data = vlaue;
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

    // create left node
    cout << "Enter the left node of " << root->data << " ";
    root->left = create_node();

    // crete right node
    cout << "Enter the right node of " << root->data << " ";
    root->right = create_node();
    return root;
}

// level order traversal
vector<int> level_order(node *root)
{
    // to store the data (vector ka use karenge )
    vector<int> ans;
    if (root == nullptr)
    {
        return ans;
    }

    // create quee to store the adress of node (to implement )
    queue<node *> q;
    q.push(root);

    // to point the next node(left or right ndode )
    node *temp;
    // loop creation
    while (!q.empty())
    {
        // first (temp) quee me jo frot hai osko point karega
        temp = q.front();
        // pehle pop karna hai
        q.pop();

        // front ka jo bhi data hai osko use kar liye
        ans.push_back(temp->data);
        if (temp->left != nullptr)
        {
            // pehle new node bhi crete karna tha
            q.push(temp->left);
        }
        if (temp->right != nullptr)
        {
            q.push(temp->right);
        }
    }

    // retrun value bhejna hoga taki wo age proceed kare
    return ans;
}

// printing the vector using function

// vector as a argument lega

// helper function to display the result
void print_vector(const vector<int> &v)
{
    cout << "Level order traversal";

    // ranged based for loop
    for (int num : v)
    {
        cout << num <<" ";
    }
    cout << endl;
}
int main()
{
    node *root;
    root = create_node();

    // levelel order call karna prega
    // isko store bhi yo karna parega
    // store karenge to jis type ka return hai osi type me store karenge
    vector<int> result = level_order(root);
    // result is a vector
    print_vector(result);

    return 0;
}
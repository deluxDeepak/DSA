#include <iostream>
#include <stack>
using namespace std;

class node {
public:
    int data;
    node *left, *right;
    node(int value) : data(value), left(nullptr), right(nullptr) {}
};

// Insert in a node (create the binary tree)
node* tree() {
    cout << "Enter the root node ";
    int value;
    cin >> value;
    
    if (value == -1) {
        return nullptr;
    }
    
    node* temp = new node(value);
    cout << "Enter the left child of " << temp->data;
    temp->left = tree();
    cout << "Enter the right child of " << temp->data;
    temp->right = tree();
    
    return temp; // Added missing return statement
}

// Preorder Traversal of Binary Tree
// 1. Recursive
void preorder_Recursive(node* root) {
    if (root == nullptr) {
        return;
    }
    cout << root->data << " ";
    preorder_Recursive(root->left);
    preorder_Recursive(root->right);
}

// 2. Iterative
void preorder_Iterative(node* root) {
    if (root == nullptr) {
        return;
    }

    stack<node*> st;
    st.push(root);

    while (!st.empty()) {
        node* temp = st.top();
        cout << temp->data << " ";
        st.pop();

        // pushing the right children into the stack
        if (temp->right) {
            st.push(temp->right);
        }
        if (temp->left) {
            st.push(temp->left);
        }
    }
}

// Inorder Traversal of Binary Tree
// 1. Recursive
void inorder_Recursive(node* root) {
    if (root == nullptr) {
        return;
    }
    inorder_Recursive(root->left);
    cout << root->data << " ";
    inorder_Recursive(root->right);
}

// 2. Iterative
void inorder_Iterative(node* root) {
    if (root == nullptr) {
        return;
    }
    
    stack<node*> st;
    node* curr = root;
    
    while (curr != nullptr || !st.empty()) {
        while (curr != nullptr) {
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout << curr->data << " ";
        curr = curr->right;
    }
}

// Level order traversal
// 1. Recursive
// 2. Iterative


int main() {
    node* root = nullptr;
    root = tree();
    
    cout << "Preorder Iterative: ";
    preorder_Iterative(root);
    cout << endl;
    
    cout << "Preorder Recursive: ";
    preorder_Recursive(root);
    cout << endl;

    cout << "Inorder Iterative: ";
    inorder_Iterative(root);
    cout << endl;
    
    cout << "Inorder Recursive: ";
    inorder_Recursive(root);

    return 0;
}

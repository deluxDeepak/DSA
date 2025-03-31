#include <iostream>
#include <queue>
#include <vector>

using namespace std;
class node
{
    public:
    int data;
    node*left,*right;
    node(int value)
    {
        left=right=nullptr;
        data=value;
    }
};
// indexing to put the value of nodes in level order
node *insert_level_order(int arr[],int index,int size)
{
    if (index>=size)
    {
        return nullptr;
    }
    // creating node with current element 
    node*temp=new node(arr[index]);
    // for left child 2*index+1
    temp->left=insert_level_order(arr,2*index+1,size);
    // for right child 2*index+2 
    temp->right=insert_level_order(arr,2*index+2,size);
    return temp;
}
void preorder(node*root)
{
    if (root==nullptr)
    {
        return;
    }
    cout<<root->data <<" ";
    preorder(root->left);
    preorder(root->right);
    
}
void inorder(node*root)
{
    if (root==nullptr)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data <<" ";
    inorder(root->right);
    
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    // giving indexing and size of element 
    node*root=insert_level_order(arr,0,n);
    cout<<"Preorder traversal :";
    preorder(root);
    cout <<"\nInorder traversal :";
    inorder(root);

    return 0;
}
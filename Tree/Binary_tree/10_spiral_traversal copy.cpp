#include <iostream>
#include<vector>
#include<queue>
using namespace std;
class node
{
    public:
    int data;
    node*left,*right;
    node(int value)
    {
        data=value;
        left=right=nullptr;
    }
};
node*insert_level_order(int arr[],int index,int size)
{
    if (index>=size)
    {
        return nullptr;
    }
    // put the value in new node 
    node*root=new node(arr[index]);
    // for left child 
    root->left=insert_level_order(arr,2*index+1,size);
    // for right child 
    root->right=insert_level_order(arr,2*index+2,size);
    return root;
}
vector<int> spiral_traversal(node*root)
{

}
void preorder(node*root)
{
    if (root==nullptr)
    {
        return;
    }
    cout <<root->data <<" ";
    preorder(root->left);
    preorder(root->right);
    
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,151,16,17,18,19,20,21,22,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    node*root=insert_level_order(arr,0,n);

    cout<<"Preorder traversal :";
    preorder(root);
    
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left, *right;
} node;

// creating the node (node ka pointer return kar do )
node *createnode(int value)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->left = temp->right = NULL;
    temp->data = value;
    return temp;
}

// creating using funcction (RECURSIVE WAY)
node*createTree()
{
    printf("Enter the value ");
    int value;
    scanf("%d",&value);
    if (value==-1) return NULL;
    // pehle root node create karo 
    node*root=createnode(value);
    root->left=createTree();
    root->right=createTree();
    
}

// print the teree using in recursive way 
void preorder(node*root)
{
    if (root==NULL) return;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    node *root = createnode(89);
    root->left = createnode(90);
    root->right = createnode(34);

    printf("\nPreorder: ");
    preorder(root);
    
    node*root1=createTree();
    printf("\nPreorder: ");
    preorder(root1);
    return 0;
}
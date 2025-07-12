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
node *createTree()
{
    printf("Enter the value ");
    int value;
    scanf("%d", &value);
    if (value == -1)
        return NULL;
    // pehle root node create karo
    node *root = createnode(value);
    root->left = createTree();
    root->right = createTree();
}

// Total number of nodes
int size_tree(node *root)
{
    if (root == NULL)
        return 0;

    return 1 + size_tree(root->left) + size_tree(root->right);
}

int max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
        return b;
}
// Height of the tree (maximum duri of node from the root )
int height(node *root)
{
    if (root == NULL)
        return;

    int left_side = height(root->left);
    int right_side = height(root->right);
    return 1 + (left_side > right_side ? left_side : right_side);
}

// print the teree using in recursive way
void preorder(node *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->data);
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

    node *root1 = createTree();
    printf("\nPreorder: ");
    preorder(root1);

    printf("The size of tree: %d ", size_tree(root));
    return 0;
}
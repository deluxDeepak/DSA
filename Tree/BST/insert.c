#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *left, *right;
} node;

// node create kar lenge
node *create_node(int value)
{
    node *temp = (node *)malloc(sizeof(node));
    temp->right = temp->left = NULL;
    temp->data = value;
    return temp;
}

node *insert(node *root, int target)
{
    if (root == NULL)
    {
        node *temp = create_node(target);
        return temp;
    }

    if (target < root->data)
    {
        root->left = insert(root->left, target);
    }
    else
    {
        root->right = insert(root->right, target);
    }
    return root;
}

void search(node*root,int target)
{
    if (!root) return;

    if (root->data==target)
    {
        printf("Given is in the tree");
    }

    if (root->data>target)
        return search(root->left,target);
    else
        return search(root->right,target);  
    
}
// node *delete(node *root)
// {
//     // case 1: One child exist
//     // case 2:
//     // case 3: Two child exist
// }
void inorder(node*root)
{
    if (!root) return;
    
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

int main()
{
    node*root=NULL;
    root=insert(root,45);
    root=insert(root,40);
    root=insert(root,43);

    printf("\nPreorder: ");
    inorder(root);
    
    search(root,56);
}
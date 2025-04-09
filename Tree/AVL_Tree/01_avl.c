#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data, height;
    struct node *left, *right;
} node;

// basic max find(expression 1 is true condition hai aur 2 jo hai wo false hai)
int max(int value1, int value2)
{
    return (value1 > value2) ? value1 : value2;
}


// before creating a node we can initilize the value
node *create_node( int value)
{
    node *new_root = (node *)malloc(sizeof(node));
    if (!new_root)
    {
        printf("Memory allocation filed\n");
    }
   
    
    new_root->data = value;
    new_root->left = new_root->right = NULL;
    new_root->height = 1;
    return new_root;
}

// find the height of the tree
int height(node *root)
{
    if (!root)
    {
        return 0;
    }
    return 1 + max(height(root->left), height(root->right));
}

int main()
{
    node *root = NULL;
    root = create_node( 1);

    // return height of the tree
    printf("Hieght of the tree :%d\n",height(root));
    

    return 0;
}
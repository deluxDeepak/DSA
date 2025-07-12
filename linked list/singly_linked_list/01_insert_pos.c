#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;

} node;
node *head = NULL;
void insert_pos(int value, int position)
{
    node *temp = head;
    // craete the node
    node *new_node = (node *)malloc(sizeof(node));
    // check condition
    if (new_node == NULL)
    {
        printf("Memory Allocation fail ");
        return;
    }
    new_node->data = value;
    new_node->next = NULL;

    if (position == 0)
    {
        new_node->next = head;
        head = new_node;
        return;
    }

    int count = 0;
    while (temp != NULL && count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp == NULL)
    {
        printf("Error:The position is out of bound ");
        return;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

void display()
{
    node *temp = head;
    printf("Linked list: ");
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    head=NULL;
}

void free_m()
{
    node *curr_node = head;
    node *temp;
    while (curr_node != NULL)
    {
        temp = curr_node->next; // Yehan adress store hai
        free(curr_node);
        curr_node = temp; // ye adress yehan a jayega
    }
}

int main()
{
    insert_pos(92, 0);
    insert_pos(93, 1);
    insert_pos(96, 2);
    display();
    insert_pos(23, 9);
    display();
    free_m();
    display();

    return 0;
}
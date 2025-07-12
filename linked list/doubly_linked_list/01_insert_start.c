#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next, *prev;
} node;

node *head = NULL;

void insert_Start(int value)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = value;
    new_node->prev = NULL;

    if (head != NULL)
    {
        head->prev = new_node;
    }
    new_node->next = head;
    // head->prev = new_node;//Ye code crash ho jayega
    head = new_node;
}

void insert_end(int value)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data=value;
    new_node->next=NULL;
    
    if (head==NULL)
    {
        new_node->prev=NULL;
        head=new_node;
        return;
    }
    
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    new_node->prev = temp;
    temp->next = new_node;
}
void display()
{
    node *temp = head;
    printf("List: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
int main()
{
    insert_Start(90);
    insert_Start(89);
    insert_Start(92);
    display();
    insert_end(33);
    insert_end(78);
    display();

    return 0;
}
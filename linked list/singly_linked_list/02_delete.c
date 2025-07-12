#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
} node;
node *head = NULL;

void insert(int value)
{
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = value;
    new_node->next = head;
    head = new_node;
}
void delete_start()
{
    if (head == NULL)
    {
        printf("Linked list is empty");
        return;
    }

    node *temp = head;
    head = head->next;
    free(temp);
}
void delete_end()
{
    // for one node exist
    if (head->next == NULL)
    {
        // yehan head ko free kar denge to osme adress rehega hi
        free(head);
        head = NULL;
        return;
    }

    // if one node exist krega to delete nahi kar payega
    node *curr = head;
    node *prev = NULL;
    while (curr->next != NULL)
    {
        prev = curr;
        curr = curr->next;
    }
    prev->next = NULL;
    free(curr);
}
void display()
{
    node *temp = head;
    printf("List is: ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    insert(23);
    insert(90);
    insert(34);
    display();
    delete_end();
    display();
    delete_start();
    display();

    return 0;
}
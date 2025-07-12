#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    // yeahn pe abhi tak node nahi mila hai (technically it is incorrect )
    // node *next;
    struct node *next;
} node;

// head can be delare globally to acces thea all
node *head = NULL;

void add_start(int value)
{
    // yehan node empty hai ya nahi check nahi karna parega
    // if (head==NULL)
    // {
    //     // create the new node
    //     head->data=value;
    // }
    // Allocate the memory for the  new node
    // Check if malloc returns the memory or not 
    node *temp = (node *)malloc(sizeof(node));
    temp->data = value;
    temp->next = head; // head is null initialy
    head = temp;
}
void insert_end(int value)
{
    // new node create
    node *new_node = (node *)malloc(sizeof(node));
    new_node->data = value;
    new_node->next = NULL;

    if (head == NULL)
    {
        head = new_node;
        return;
    }

    node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->next = new_node;
}
void display()
{
    node *temp=head;
    while (temp != NULL)
    {
        printf("%d ->", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// A function to clean the entire list 
void free_list()
{
    node *current = head;
    node *next_node;
    while (current != NULL)
    {
        next_node = current->next; // Save the next pointer
        free(current);             // Free the current node
        current = next_node;       // Move to the next node
    }
    head = NULL; // The list is now officially empty.
}


int main()
{
    add_start(90);
    add_start(92);
    add_start(93);
    display();
    insert_end(34);
    insert_end(94);
    insert_end(74);
    display();

    return 0;
}
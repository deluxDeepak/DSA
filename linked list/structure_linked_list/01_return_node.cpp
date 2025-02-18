#include <iostream>
#include <cstdlib> // For malloc() and exit()
using namespace std;

// Typedef structure
typedef struct node
{
    int data;
    node *next;
} node;

// Function to create a new node(reteurn kanra node ko )
node *insert(node *head, int x)
{
    node *temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        cout << "Memory allocation failed!" << endl;
        exit(1);
    }
    temp->data = x;
    temp->next = head; // Insert at the beginning
    return temp;       // Return new head
}

// Function to display the linked list
void display(node *head)
{
    node *temp = head;
    cout << "Linked List: ";
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Free allocated memory
void freeMemory(node *head)
{
    node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    node *head = NULL; // Initialize head pointer

    head = insert(head, 45);
    head = insert(head, 344);
    head = insert(head, 99); // Insert another value

    display(head); // Display the list

    freeMemory(head); // Free allocated memory

    return 0;
}

// inseerting the value at the end of llinked list
#include <iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
} node;

// creating node
node *create_node(node *next_node, int value)
{
    node *temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        cout << "Memory allocation failed :";
        exit(1);
    }
    temp->next = next_node;
    temp->data = value;
    return temp;
}

// insertion at end
node *insert_end(node *head, int value)
{
    // agr head me null hai to mujhe ek node create karke retrurn karo
    if (head == NULL)
    {
        return create_node(NULL, value);
    }
    else
    {
        node *tail = head;
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
        tail->next = create_node(NULL, value);
        // if we return temmp then it would losss the adress of prev
        return head;
    }
}

// display tehe node
void display(node *head)
{
    cout << "The linked list :";
    node *temp = head;
    while (temp != NULL)
    {

        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << " NUll" << endl;
}

// freee the allocated memory
void free_memory(node *head)
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
    node *head = NULL;
    head = insert_end(head, 78);
    head = insert_end(head, 90);

    display(head);
    free_memory(head);

    return 0;
}
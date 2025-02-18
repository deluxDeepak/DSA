// insertion at a position
#include <iostream>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;

} node;
node *create_node(node *next_node, int value)
{
    node *temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        cout << "The memory is not allocated :";
        exit(1);
    }
    temp->data = value;
    temp->next = next_node;
    return temp;
}

node *insert_position(node *&head, int value, int position)
{
    // conditoin
    // x<0
    if (position < 0)
    {
        cout << "Enter the valid ooption .." << endl;
        return head;
    }
    // x=0(create the node and return the head )
    if (position == 0)
    {
        return create_node(head, value);
    }

    // if (position == 0)
    // { // Insert at the beginning
    //     head = create_node(head, value);
    //     return head;
    // }
    node *temp = head;
    int count = 0;
    while (temp != NULL && count < position - 1)
    {
        temp = temp->next;

        // count ko barana parega (positoin tak jane ke liye )
        count++;
    }
    // yehin pe position out of range ho skta hai
    // temp=null (out of range position)
    if (temp == NULL)
    {
        cout << "The enter position is out of range " << endl;
        return head;
    }
    // create me dal denge temp ka next(taki age vala value loss na ho jaye )
    temp->next = create_node(temp->next, value);
    return head;
}

void display(node *&head)
{
    cout << "The linked list :";
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    node *head = NULL;

    // yahan pe head ko update karna hoga
    head = insert_position(head, 89, 0);

    head = insert_position(head, 90, 1);
    display(head);

    return 0;
}
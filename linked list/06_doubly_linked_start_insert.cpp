#include <iostream>
using namespace std;

// create doubly linked list
class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int value)
    {
        prev = NULL;
        next = NULL;
        data = value;
    }
};
int main()
{
    node *head=NULL;
    
    // inserting a node
    if (head == NULL)
    {
        head = new node(89);
    }
    else
    {
        node *temp;
        temp = new node(56);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    // to show the value of node
    node *temp1=head;
    while (temp1 != NULL)
    {
        cout << temp1->data << endl;
        temp1 = temp1->next;
    }
    return 0;
}
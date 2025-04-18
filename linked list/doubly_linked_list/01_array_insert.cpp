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
    node *head = NULL;
    int arr[5] = {45, 67, 89, 34, 56};

    // inserting a array with the help of starting insert 
    for (int i = 0; i < 5; i++)
    {
        if (head == NULL)
        {
            head = new node(arr[i]);
        }
        else
        {
            node *temp;
            temp = new node(arr[i]);
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
    }

    // insertion at the end of the doubly linked list
    if (head == NULL)
    {
        head = new node(98);
    }
    else
    {
        node *curr = head;
        while (curr->next != NULL)
        {
            curr = curr->next;
        }
        node *temp = new node(78);
        temp->prev = curr;
        curr->next = temp;
    }

    // insertion of value in doubly linked list at the starting
    if (head == NULL)
    {
        head = new node(90);
    }
    else
    {
        node *temp;
        temp = new node(66);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    
    // to show the value of node
    node *temp1 = head;
    while (temp1 != NULL)
    {
        cout << temp1->data << endl;
        temp1 = temp1->next;
    }
    return 0;
}
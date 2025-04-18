#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int value)
    {
        data = value;
        next = NULL;
    }
};
int main()
{
    node *head;
    head = NULL;

    // insertion in starting 
    int arr[5] = {56, 78, 90, 45, 55};
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
            head = temp;
        }
    }
    
    // insertion at the end 
    if (head == NULL)
    {
        head = new node(10);
    }
    else
    {
        // to insert the data at end
        node *tail = head;
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
        node *temp1;
        temp1 = new node(788);
        tail->next = temp1;
    }

    // to show the data
    node *temp2 = head;
    while (temp2 != NULL)
    {
        cout << temp2->data << endl;
        temp2= temp2->next;
    }
}
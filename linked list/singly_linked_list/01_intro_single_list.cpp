#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    // constructur to make (creating a node )
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
    // to show the data
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
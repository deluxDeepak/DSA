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
    node *head = NULL;
    int arr[5] = {45, 67, 78, 34, 55};
    // insertion at the end of the linked list
    // 1.linked list not persent

    for (int i = 0; i < 5; i++)
    {
        if (head == NULL)
        {
            head = new node(arr[i]);
        }

        // 2.linked list is persent
        else
        {
            node *tail = head;

            // traverse to the last node (last node tak jayega ye )
            while (tail->next != NULL)
            {
                tail = tail->next;
            }
            // inserting a new node //
            node *temp;
            temp = new node(arr[i]);
            tail->next = temp;
        }
    }

    // to show the data
    node *temp1 = head;
    while (temp1 != NULL)
    {
        cout << temp1->data << endl;
        // give the adress of the next node
        temp1 = temp1->next;
    }

    return 0;
}
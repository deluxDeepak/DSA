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
    node *tail = head;
    // insertion at the end of the linked list
    // 1.linked list not persent
    if (head == NULL)
    {
        head = new node(67);
    }

    // 2.linked list is persent
    else
        while (tail->next != NULL)
        {
            tail = tail->next;
            node *temp;
            temp = new node(89);
            tail->next = temp;
        }
    // to show the data
    node *temp1 = head;
    while (temp1)
    {
        cout << temp1->data;
        // give the adress of the next node
        temp1 = temp1->next;
    }
    return 0;
}
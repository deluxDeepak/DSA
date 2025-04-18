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
        next = nullptr;
    }
};
void pop(node *&head, int pos)
{
    if (head == nullptr)
    {
        cout << "The lsit is empty !" << endl;
        return;
    }

    if (pos == 0)
    {
        node *temp = head;
        head = head->next;
        cout << temp->data << " is poped out." << endl;
        delete temp;
        return;
    }
    node *prev = nullptr;
    node *curr = head;

    // iterating to the loop
    for (int i = 0; i < pos - 1; i++)
    {
        if (curr->next == nullptr)
        {
            cout << "The position is out of bound!" << endl;
            return; // Missing return causes error later
        }

        prev = curr;
        curr = curr->next;
    }
    if (curr->next == nullptr)
    {
        cout << "The position is out of bound !" << endl;
    }


    prev->next = curr->next;
    cout << curr->data << " is poped." << endl;
    delete curr;
}

void printList(node *head)
{
    while (head)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    node *head = nullptr;

    // creating  a list
    head = new node(23);
    head->next = new node(45);
    head->next->next = new node(48);
    pop(head, 9);
    printList(head);
    return 0;
}
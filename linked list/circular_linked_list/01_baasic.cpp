#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int value) : data(value), next(nullptr) {}
};

// circular linked list
void insert(node *&head,int num)
{
    node *temp = new node(num);
    node *tail = head;
    if (head == nullptr)
    {
        head = temp;
        temp->next = head;
        return;
    }
    else
    {

        // yahan last jane ka condition change hoga bas
        while (tail->next != head)
        {
            tail = tail->next;
        }
        tail->next = temp;
        temp->next = head;
    }
}

// Fucntion to print the circular linked list
void print(node *head)
{
    if (head == nullptr)
    {
        cout << "The list is empty." << endl;
        return;
    }
    node *temp = head;
    cout << "Linked list: ";
    while (temp->next != head)
    {
        cout << temp->data << " ";
        temp=temp->next;
    }
    cout<< temp->data;
    cout << endl;



    // node* temp = head;
    // do {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // } while (temp != head);
    // cout << endl;
}
int main()
{
    node *head = nullptr;
    insert(head,67);
    insert(head,90);
    print(head);
    return 0;
}
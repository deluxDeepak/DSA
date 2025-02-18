#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class linked_list
{
public:
    node *head = NULL;

    void insert_position(int data, int position)

    {
        node *temp2 = new node(data); // node to be insert
        if (position == 0)
        {
            temp2->next = head;
            head = temp2;
            return;
        }
        node *temp = head;

        int count = 0;
        while (temp != NULL && count < position - 1)
        {
            temp = temp->next;
            count++;
        }
        if (temp == NULL)
        {
            cout << "position is out range :" << endl;
            // to avoid memory leakage we should delete the temp2
            delete temp2;
            return;
        }
        temp2->next = temp->next;
        temp->next = temp2;
    }
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "null" << endl;
    }
};
int main()
{
    linked_list list1;
    list1.insert_position(88, 0);
    list1.insert_position(88, 0);
    list1.display();

    return 0;
}
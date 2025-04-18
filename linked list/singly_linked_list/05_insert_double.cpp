#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next, *prev;
    node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};
class double_list
{
public:
    node *head = NULL;
    void insert_start(int value)
    {

        node *temp = new node(value);
        if (head == nullptr)
        {
            head = temp;
            return;
        }
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    void display()
    {
        // aGR LIST KHALI HAI TO MSG DENA ACCHI BAT HAI
        if (head == nullptr)
        {
            cout << "The linked list is empty :" << endl;
            return;
        }

        cout << "Linked list : ";
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    // lsit in reverse order me
    void reverse_display()
    {
        if (head == nullptr)
        {
            cout << "The list is empty :" << endl;
            return;
        }
        node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }

        cout << "Reverse order of linked list :";
        while (temp != nullptr)
        {
            cout << temp->data << " <-> ";
            temp = temp->prev;
        }
        cout << "NULL" << endl;
    }
};
int main()
{
    double_list list;

    list.insert_start(45);
    list.insert_start(33);
    list.insert_start(44);
    list.insert_start(55);
    list.insert_start(66);

    list.display();
    list.reverse_display();
    return 0;
}
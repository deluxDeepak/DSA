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

    void isert_end(int value)
    {
        node *temp = new node(value);
        if (head == NULL)
        {
            head = temp;
            return;
        }
        node *tail = head;
        while (tail->next != NULL)
        {
            tail = tail->next;
        }
        tail->next = temp;
    }

    // starting node delete
    void delete_node_start()
    {
        if (head == NULL)
        {
            cout << "Linked list is empty..." << endl;
            return;
        }
        node *temp = head;
        head = head->next;
        delete temp;
    }
    void delete_node_end()
    {

        if (head == NULL)
        {
            cout << "Linked list is empty ..." << endl;
            return;
        }
        // if one node is persent
        else if (head->next == NULL)
        {
            node *temp = head;
            head = NULL;
            delete temp;
        }
        else //(head!=NULL)
        {
            node *curr = head;
            node *prev = NULL;
            while (curr->next != NULL)
            {
                prev = curr;
                curr = curr->next;
            }
            prev->next = NULL;
            delete curr;
        }
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
    linked_list list;
    list.isert_end(11);
    list.isert_end(22);
    list.isert_end(33);
    list.isert_end(44);
    list.isert_end(55);
    list.isert_end(66);

    cout << "original list :";
    list.display();

    // delte node from the satrt 
    cout<<"After deleting the start node..(deletion from start) :";
    list.delete_node_start();
    list.display();

    cout<<"After deleting the node from the end :";
    list.delete_node_end();
    list.display();
    return 0;
}
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

    void delte_position(int pos)
    {
        // edge condition
        // is_empt
        if (head == NULL)
        {
            cout << "The linked list is empty: ";
            return;
        }
        // if one node is persent
        if (pos == 1)
        {
            node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        node *curr = head;
        node *prev = NULL;
        int count = 0;
        while (curr != NULL && count < pos - 1)
        {
            prev = curr;
            curr = curr->next;
            // count plus karna bhul gya tha
            count++;
        }
        // to handle the position is out of range (condititon )
        if (curr == NULL)
        {
            cout << "The position is out of range :" <<endl;
            return;
        }

        prev->next = curr->next;
        delete curr;
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

    
    list.delte_position(6);
    cout << "After the deltion frm the linnnked list :"<<endl;
    list.display();
    return 0;
}
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next, *prev;
    node(int value) : data(value), next(nullptr), prev(nullptr) {}
};
void insert(node *&head, int pos, int data_val)
{
    if (pos<0)
    {
       cout<<"Inavalid position !" <<endl;
       return;
    }
    

    // pos==0 means insertion at the begning
    if (pos == 0)
    {
        // list exist nahi karta hai
        if (head == nullptr)
        {
            head = new node(data_val);
            cout<<head->data<<" is inserted one node."<<endl;
        }

        // list exist karta hai
        else
        {
            node *temp = new node(data_val);
            temp->next = head;
            head->prev = temp;
            head = temp;
            cout << temp->data << " is inserted." << endl;
        }
    }

    else
    {
        node *curr = head;
        while (--pos && curr!=nullptr)
        {
            curr = curr->next;
        }

        if (curr==nullptr)
        {
            cout<<"Position is out of bound."<<endl;
            return;
        }
        

        // curr->next==null means the it is pointing to the last (Insertion is done in the last )
        if (curr->next == nullptr)
        {
            node *temp = new node(data_val);
            temp->prev = curr;
            curr->next = temp;
            cout << temp->data << " is inserted at last." << endl;
        }

        // curr->next is not nullptr (insertion at the poisition )
        else
        {
            node *temp = new node(data_val);
            temp->next = curr->next;
            curr->next = temp;
            temp->prev = curr;
            temp->next->prev = temp;
            cout << temp->data << " is inserted at " << pos << endl;
        }
    }
}

void printList(node *head) 
{
    cout << "List: ";
    while (head != nullptr) {
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout <<"Null"<< endl;
}
int main()
{
    node *head = nullptr;
    insert(head, 0, 34);
    insert(head, 1, 45);
    insert(head, 2, 66);
    printList(head);

    return 0;
}
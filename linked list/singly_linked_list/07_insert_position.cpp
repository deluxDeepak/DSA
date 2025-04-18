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


// To fix this, you need to pass the head pointer by reference (i.e., use node*& head) so that changes inside the function reflect in the original pointer in main().
void insert_poisition(node *&head, int value, int pos)
{
    node *temp = new node(value);
    if (pos == 0)
    {
        cout<<temp->data<<" is inserted."<<endl;
        temp->next = head;
        head = temp;
        return;
    }

    // iterating the linked list (by using for loop and while loop)
    node *temp2 = head;
    int count = 0;
    while (temp2 != nullptr && count < pos - 1)
    {
        temp2=temp2->next;
        count++;
    }

    // condition to check the poisition is not out of bound 
    if (temp2==nullptr)
    {
        cout<<"Poisition is out of bound !"<<endl;
        delete temp;
        return;
    }
    
    temp->next=temp2->next;
    temp2->next=temp;
    cout<<temp->data<<" is inserted."<<endl;
}
int main()
{
    node *head=nullptr;
    insert_poisition(head,56,0);
    insert_poisition(head,44,1);


    return 0;
}
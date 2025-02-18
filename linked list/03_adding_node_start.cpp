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
    node *head;
    head=NULL;
    // adding a node at starting

    // (2.node is not persent )
    if (head == NULL)
    {
        head = new node(56);
    }
    // (1.node is persent )
    else
    {
        node *temp;
        temp=new node(67);
        temp->next = head;
        head = temp;
    }
    // to show the data 
    node *temp=head;
    while (temp!=NULL)
    {
        cout <<temp->data ;
        temp=temp->next;
    }
    
    return 0;
}
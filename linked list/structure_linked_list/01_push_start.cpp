#include <iostream>
using namespace std;

// only one list can be make by this 
// with typedef (head global pointer baana hai )
typedef struct node
{
    int data;
    struct node *next;
    struct node *head;
} node;

// head global varible (intilize)
node *head = NULL;
// void intilize(node*s,int value)
// {
//     s->data=value;
//     s->next=NULL;

// }
void insert(int x)
{
    node *temp = (node *)malloc(sizeof(int));
    // cheking the condition
    if (temp == NULL)
    {
        cout << "memory is not allocated :";
        return;
    }
    temp->data = x;
    temp->next = head;
    head = temp;
}
void display()
{
    cout<<"LINKED list:";
    node *temp1;
    while (temp1 != NULL)
    {
        cout<<temp1->data  <<"->";
        temp1 = temp1->next;
    }
}

// need to free the memory
void free_memory()
{
    node *temp2;
    temp2 = head;
    head = head->next;
    free(temp2);
}
int main()
{
    node s;
    insert(9);
    insert(5);
    insert(10);
    insert(56);
    display();
    free_memory();

    return 0;
}
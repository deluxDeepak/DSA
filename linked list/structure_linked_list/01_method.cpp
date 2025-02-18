#include <iostream>
#include <stdlib.h>
using namespace std;

// without typedef 
struct node
{
    int data;
    node *next;
};

// function to insert a node (head is passed by refernce )
void insert_begning(node *&head, int value)
{
    node *temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        cout << "Memory is not allocted :";
        return;
    }
    temp->data = value;
    temp->next = head;
    head = temp; // updating the node
}

// to display the linked list
void display(node *&head)
{
    cout<< "linked list :";
    node *temp=head;

    // The loop condition while (temp->next != NULL) causes the last node's value to be skipped
    while (temp != NULL)
    {
        cout  << temp->data << " -> ";
        temp = temp->next;
    }
    cout <<"NULL" <<endl;
}

// to free the alloated memory
void free_memory(node *&head)
{
    node *temp;
    while (head!= NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}
int main()
{
    // intilize the head node(agr type def nahi likha hai to )
    struct node *list1 = NULL;
    struct node*list2=NULL;

    // functon call 
    insert_begning(list1,78);
    insert_begning(list1,79);
    insert_begning(list1,80);
    insert_begning(list1,81);
    insert_begning(list1,82);
    display(list1);
    free_memory(list1);


    insert_begning(list2,5);
    insert_begning(list2,4);
    insert_begning(list2,3);
    insert_begning(list2,2);
    insert_begning(list2,1);
    display(list2);
    free_memory(list2);
    return 0;
}
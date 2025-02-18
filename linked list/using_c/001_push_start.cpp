#include <iostream>
using namespace std;

// typeef use
typedef struct node
{
    int data;
    node *next;
} node;

// fucntion to insert the node
// yahan pe return karna parega
node *insert(int x) /// this willl creates the object in the heap
{
    node *temp = (node *)malloc(sizeof(node));
    if (temp == NULL)
    {
        cout << "Memory is not allocated :";
        exit(1);
    }
    temp->data = x;
    temp->next = NULL;
    return temp;
    free(temp);
}

void display()
{
    node *temp;
    while (temp != NULL)
    {
        cout << "The inserted data is :" << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{
    // fucnttion call
    // value return hua hai isko store karna parega
    // pointer type ka value hau osi me store hoga

    
    node *s = insert(45);

    node *s1= insert(344);
    display();

    return 0;
}
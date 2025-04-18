#include <iostream>
using namespace std;
// basic sytaxa for creating the node 
class node
{
    public:
    // creating a node with data and pointer 
    int data;
    node*next;
    node(int value)
    {
        // initilize the given data 
        data=value;
        next=NULL;
    }
};
int main()
{
    // dynamic way to create the node          
    node*head;
    head=new node(67);
    cout <<head->data <<endl;
    cout <<head->next <<endl;
    return 0;
}
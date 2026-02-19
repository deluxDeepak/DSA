#include <iostream>
using namespace std;
#define size 100

int front = -1;
int rear = -1;
int array[size];
void insert(int value)
{

    if (rear == size - 1)
    {
        cout << "The queue is full!" << endl;
        return;
    }
    // Assume karna hai jo element array me hai wo pehle se hi arranged hai
    if (front == -1)
        front = 0;
    int i;
    for (i = rear; i >= 0 && array[i] < value; i--)
    {
        array[i + 1] = array[i]; // Shift the element to the next position
    }
    array[i + 1] = value;
    rear++;
}

void pop()
{
    // if(rear==-1)
    if (front ==- 1 || front > rear)
    {
        cout << "Queue is empty!";
        return;
    }
    cout << "deleted element: " << array[front] << endl;
    front++;
}
int main()
{
    insert(67);
    insert(45);
    insert(99);
    insert(20);
    insert(100);
    pop();
    return 0;
}
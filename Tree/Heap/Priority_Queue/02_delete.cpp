#include <iostream>
using namespace std;
struct queue
{
    int *arr;
    int rear, front, total_size;

    queue(int size)
    {
        arr = new int[size];
        total_size = size;
        rear = front = -1;
    }
    void push(int value)
    {
        if (rear == total_size - 1)
        {
            cout << "Queue is overflow:";
        }
        else
        {
            int i;
            for (i = rear; i >= 0 && arr[i] < value; i--)
            {
                arr[i + 1] = arr[i];
            }
            arr[i + 1] = value;
            rear++;
        }
    }

    void pop()
    {
        if (rear == -1)
        {
            cout << "Queue is empty. Cannot pop.";
            return;
        }
        else
        {
            // store the value (jo delte karna hai )
            int deleteValue=arr[0];
            // front++;
            cout << " Deleted value: " << deleteValue << endl;

            // Shift all the element to right (one position )
            for (int i = 0; i < rear; i++)
            {
                arr[i]=arr[i+1];
            }

            // Decrease the rear pointer as one element has been removed
            rear--;

            // Optional: Reset front if the queue becomes empty after popping
            // if (rear == -1) {
            //     front = -1; // Reset front as well
            // }
            
        }
    }

    void print()
    {
        if (rear == total_size)
        {
            cout << "Queue is empty :";
        }
        cout << "Queue element: ";
        for (int i = 0; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    queue q(7);
    q.push(45);
    q.push(56);
    q.push(90);
    q.push(34);
    q.print();

    q.pop();
    q.pop();
    q.print();

    return 0;
}
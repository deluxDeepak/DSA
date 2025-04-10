#include <iostream>
using namespace std;
#define size 6

int rear = -1, front = -1;
int arr[size];
void insert(int value)
{
    if (rear == size - 1)
    {
        cout << "Quue is overflow :" << endl;
        return;
    }
    int i;

    // jo curent element rehega wo value se compare karega
    for (i = rear;i >= 0 && arr[i] < value; i--)
    {
        // shift the element
        arr[i + 1] = arr[i];
    }

    // update the value
    arr[i + 1] = value;
    rear++;
}
void print()
{
    if (rear==-1)
    {
        cout<<"Queue is empty " << endl;
        return;
    }
    
    cout<<"Queue element :" ;
    // Iterate only up to the current 'rear' index
    for (int i = 0; i <= rear; i++)
    {
        cout << arr[i] <<" ";
    }
    cout<<endl;
    
}
int main()
{
    insert(34);
    insert(20);
    insert(55);
    print();
    return 0;
}
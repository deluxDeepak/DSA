#include <iostream>
using namespace std;

void heapify(int arr[], int index, int size)
{
    int largest = index;
    int left = index * 2 + 1;
    int right = index * 2 + 2;

    // only change index not the actual value
    if (left < size && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < size && arr[right > arr[largest]])
    {
        largest = right;
    }
    if (index != largest)
    {
        swap(arr[index], arr[largest]);
        heapify(arr, largest, size);
    }
}

// Function to build a max-heap from an array
void build_heap(int arr[], int n)
{
    // start from the last non leaf node 
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(arr, i, n);
    }
}

void print(int arr[],int n)
{
    cout<<"Heap element:";
    for (int i = 0; i < n; i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl;
    
}
int main()
{
    int arr[]={14,15,12,22,17,20,18,24,23,30,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Original Array:";
    print(arr,n);

    build_heap(arr,n);
    cout<<" Array after building heap :";
    print(arr,n);
    return 0;
}
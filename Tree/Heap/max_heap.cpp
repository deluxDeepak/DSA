#include <iostream>
using namespace std;
class maxheap
{
public:
    int *arr;
    int size;       // Current size
    int total_size; // total size of the heap
    maxheap(int n)
    {
        arr = new int[n];
        size = 0;
        total_size = n;
    }
    void insert(int value)
    {
        if (size == total_size)
        {
            cout << "Heap is full" << endl;
            return;
        }

        // last me insert karenge
        arr[size] = value;
        int index = size;
        size++;

        // ab heapify operation karenge
        while (index > 0 && arr[(index - 1) / 2] < arr[index])
        {
            swap(arr[(index - 1) / 2], arr[index]);
            index = (index - 1) / 2;
        }
        cout << arr[index] << " is inserted\n";
    }
    void print()
    {
        for (int i=0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void heapify(int index)
    {
        int parent=index;
        int left=2*index+1;
        int right=2*index+2;
        if (left<size&&arr[left]>arr[parent])
        {
            parent=left;
        }
        if (right<size&&arr[right]>arr[parent])
        {
            parent=right;
        }
        if(parent!=index)
        {
            swap(arr[parent],arr[index]);
            heapify(parent);                    // parent node se heapify karenge
        } 
    }
    // deliting the node in the max heap always dete the root node 
    void pop()
    {
        if (size==0)
        {
            cout<<"Heap is underflow" <<endl;
            return;
        } 
        arr[0]=arr[size-1];                         //Last element index se delete karenge 
        cout<<arr[0] <<"deleted from the heap"<<endl;
        size--;
        if (size==0)
        {
            return;
        }
        heapify(0);                           // root node se heapify karenge
        
        
    }
};
int main()
{
    maxheap m1(4);
    m1.insert(14);
    m1.insert(11);
    m1.pop();
    m1.insert(15);
    m1.insert(20);
    m1.print();
    m1.pop();
    return 0;
}
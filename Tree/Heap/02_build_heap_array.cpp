#include <iostream>
using namespace std;

struct maxheap
{
    int *arr;
    int size;
    int total_size;
    maxheap(int total_size)
    {
        arr = new int[total_size];
        size = 0;
        this->total_size = total_size;
    }

    // Destructor to prevent memory leaks
    ~maxheap() {
        delete[] arr; // Deallocate the memory
        cout << "\nHeap memory released." << endl;
    }
    
    // inserting the array
    void insert(int *pointer_array, int total_size)
    {

        for (int i = 0; i < total_size; i++)
        {
            if (size == total_size)
            {
                cout << "Heap overflow :";
                return;
            }
            arr[size] = pointer_array[i];
            int index = size;
            size++;
            while (index > 0 && arr[(index - 1) / 2] < arr[index])
            {
                swap(arr[(index - 1) / 2], arr[index]);
                index = (index - 1) / 2;
            }
            cout<<arr[index] <<"is Inserted" <<endl;
        }
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout<<arr[i] <<" ";
        }
        
    }
};

int main()
{
    int arr[]={12,45,23,67,12,89,34};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxheap obj(n);

    obj.insert(arr,n);
    cout<<"After insertion Array :";
    obj.print();

    return 0;
}
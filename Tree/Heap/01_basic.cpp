#include <iostream>
using namespace std;
class maxheap
{
public:
    int *array;
    int size;       // Initial size of the array
    int total_size; // Size of the array
    maxheap(int value)
    {
        // Dynamic size allocation of array
        array = new int[value];
        size = 0;
        total_size = value;
    }

    // Function to insert
    void insert(int value)
    {
        if (size == total_size)
        {
            cout << "Heap is full\n";
            return;
        }

        // last me insert karna hai
        array[size] = value;
        int index = size;
        size--;

        // parent=(index-1)/2
        while (index > 0 && array[(index - 1) / 2] < array[index])
        {
            swap(array[(index - 1) / 2], array[index]);

            // update the index
            index = (index - 1) / 2;
        }
        cout << value << " is inserted\n";
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << array[i] << " ";
        }
    }
};

int main()
{
    // Object and size of array
    int size_array;
    cout << "Enter the size of the array:";
    cin >> size_array;
    maxheap m1(size_array);

    m1.insert(14);

    m1.print();
    return 0;
}
#include <iostream>
using namespace std;
class maxheap
{
    public:
    int *array;
    int size;
    int total_size;
    maxheap(int value)
    {
        array = new int[value];
        size = 0;
        total_size = value;
    }
    void insert(int value)
    {
        if(size==total_size)
        {
            cout<<"Heap is full\n";
            return;
        }
        // last me insert karna hai 
        array[size]=value;
        int index=size;
        size--;
        while(index>0 && array[(index-1)/2]<array[index])
        {
            swap(array[(index-1)/2],array[index]);
            index=(index-1)/2;
        }
        cout<<value<<" is inserted\n";
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout<<array[i];
        } 
    }
};

int main()
{
    // making object and passing the size of the array
    maxheap m1(5);
    m1.insert(14);
    m1.print();
    return 0;
}
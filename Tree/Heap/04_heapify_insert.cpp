#include <iostream>
#include <vector>
using namespace std;
class MxHeap
{
    vector<int> heap;
    void heapify(int index)
    {
        int parent = (index - 1) / 2;
        while (index > 0 && heap[parent] < heap[index])
        {
            swap(heap[parent], heap[index]);
            index = parent;
        }
    }

public:
    // void insert(int value)
    // {
    //     // #THE value is inderted in the last heap.size()-1 ===It will give the last index
    //     heap.push_back(value);
    //     heapify(heap.size() - 1);
    // }

    void insert(vector<int> value)
    {
        // #THE value is inderted in the last heap.size()-1 ===It will give the last index

        for (auto push : value)
        {
            heap.push_back(push);
            heapify(heap.size() - 1);
        }
    }

    void display()
    {
        cout<< "The value are: " ;
        for (int result : heap)
        {
            cout<< result << " ";
        }
    }
};
int main()
{
    MxHeap h1;

    vector<int>value={23,45,11,34,78,34,30};
    h1.insert(value);
    h1.display();
    // h1.insert(5);
    // h1.insert(99);
    // h1.insert(33);
    // h1.insert(44);
    // h1.insert(55);
    // h1.insert(89);
    // h1.display();

    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

class maxheap
{
    vector<int> heap;

    void heapify_down(int index)
    {
        while (index > 0 && heap[(index - 1) / 2] < heap[index])
        {
            swap(heap[index], heap[(index - 1) / 2]);
            index = (index - 1) / 2;
        }
    }
    void heapify_up(int index)
    {
        int size = heap.size();
        int largest = index;
        int left = index * 2 + 1;
        int right = index * 2 + 2;
        if (left < size && heap[left] > heap[largest])
        {
            left = largest;
        }
        if (right < size && heap[right] > heap[largest])
        {
            right = largest;
        }
        if (index != largest)
        {
            swap(heap[largest], heap[index]);
            heapify_up(largest);
        }
    }

public:
    void push(int value)
    {
        // vector me jo push ho reha hai oska index denge yehan (last=size-1)
        heap.push_back(value);
        heapify_up(heap.size() - 1);
        cout << value << " pushed into the heap.";
    }
    void pop()
    {
        if (heap.empty())
        {
            cout << "Heap is Empty. Cannot pop";
            return;
        }
        // store the front element (use further )
        int popped_value = heap[0];
        // Replace the root with the last element in the heap
        heap[0] = heap.back(); // Get the last element
        heap.pop_back();
        heapify_down(0);
        cout << popped_value << " popped from the heap.";
    }
    int top()
    {
        return heap.empty() ? -1 : heap[0];
    }
    int size()
    {
        return heap.size();
    }
    bool empty()
    {
        return heap.empty();
    }
    void print()
    {
        if (heap.empty())
        {
            cout << "Heap is Empty." << endl;
            return;
        }

        cout << "Element in the heap:";
        for (int i = 0; i < heap.size(); i++)
        {
            cout << heap[i] << " ";
        }
        cout << endl;
    }
};
int main()
{

    maxheap obj;
    int choice;
    while (1)
    {
        cout << "\n************* Priority Queue ****************" << endl;
        cout << "1.Push\n"
             << "2.Pop\n"
             << "3.size\n"
             << "4.top\n "
             << "5.empty\n"
             << "6.print the element\n "
             << "7.Exit" << endl;

        cout << "Enter your choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            int n;
            cout << "Enter the value to push:";
            cin >> n;
            obj.push(n);
            break;
        case 2:
            obj.pop();
            break;
        case 3:
            cout << "Size of Heap is:" << obj.size();

            break;
        case 4:
            cout << "Top element in the heap is: ";
            obj.top();
            break;
        case 5:
            if (obj.empty())
            {
                cout << "The heap is Empty:";
            }
            else
                cout << "The heap is not empty:";
            break;
        case 6:
            obj.print();
            break;
        case 7:
            exit(1);
        default:
            cout << "Wrong choice.Plese try again .." << endl;
            break;
        }
    }

    return 0;
}
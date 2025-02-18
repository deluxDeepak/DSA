#include <iostream>
using namespace std;

// stack operation
class stack
{
private:
    int *arr;
    int top;
    int size;

public:
    stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }

    // to push the element i stack
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack is overflow" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = value;
        }
    }

    // to pop the element from the array
    void pop()
    {
        if (top == -1)
        {
            cout << "stack is underflow:" << endl;
        }
        else
        {
            top--;
        }
    }

    // to display the peak element
    int peak()
    {
        if (top == -1)
        {
            cout << "Stack is emty :" << endl;
        }
        else
        {
            cout <<"THe peak element: " <<arr[top]<<endl;
        }
    }

    // getting the size of the stack
    int is_size()
    {
        cout <<"The size of the stack is "<<top+1 <<endl;
    }


    // to display the the stack
    void display()
    {
        // elements persent in the stack (top tak iterate karna hoga )
        for (size_t i = 0; i <= top; i++)
        {
            cout << arr[i] << endl;
        }
    }
};
int main()
{
    stack s1(5);
    s1.push(56);
    s1.push(5);
    s1.push(564);
    s1.push(59992);
    s1.pop();
    s1.peak();
    s1.is_size();

    s1.display();
    return 0;
}
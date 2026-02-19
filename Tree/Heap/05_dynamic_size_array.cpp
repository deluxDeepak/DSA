#include <iostream>
using namespace std;
class array
{
public:
    int *arr;                             // Pointer to store the adress
    virtual void set_size(int value) = 0; // Pure virtual function

    // Agr koi function banate ho to use define karna hoga class ke scope me

    // Virtual destructor to free the memory
    virtual ~array()
    {
        delete[] arr;
    }
};
class derived_operation : public array
{
    // Adding all the indexed element of the array
public:
    void set_size(int value) override
    {

        // Dyanamically allocate the size of the array
        arr = new int[value];
        for (int i = 0; i < value; i++)
        {
            arr[i] = i;
        }
    }
    void add_element(int value)
    {
        int sum = 0;
        for (int i = 0; i < value; i++)
        {
            sum = sum + arr[i]; // arr[i] is uninitialized — undefined behavior!
        }
        cout << "Sum = " << sum << endl;
    }
};
int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    array *newobj1;
    derived_operation obj_derived;
    newobj1 = &obj_derived;
    newobj1->set_size(size);
    obj_derived.add_element(size);
    // array*newobj=new derived_operation();
    // newobj->set_size(size);

    return 0;
}
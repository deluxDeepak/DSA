#include <iostream>
using namespace std;

// Array decay ocurrs ( Unless you use reference )
// pointer to the first element of the array 

void print_array(int (&arr)[10])
{
    for (int i=0; i < 10; i++)
        cout  << arr[i] <<" ";
}
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 10};
    cout<<"Array: ";
    int size_of_array=sizeof(array)/sizeof(array[0]);
    
    print_array(array);

    return 0;
}
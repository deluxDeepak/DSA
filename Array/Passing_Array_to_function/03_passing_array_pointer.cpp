#include <iostream>
using namespace std;

// Array decay ocurrs ( Unless you use reference )
// pointer to the first element of the array (Size of the array is lost)

void print_array(int *arr,int size)
{
    for (int i=0; i < size; i++)
        cout  << arr[i] <<" ";
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 10};
    cout<<"Array: ";
    int size_of_array=sizeof(array)/sizeof(array[0]);
    
    print_array(array,size_of_array);

    return 0;
}
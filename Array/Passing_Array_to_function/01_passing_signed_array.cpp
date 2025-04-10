#include <iostream>
using namespace std;

void print_array(int arr[10])
{
    for (int i=0; i < 10; i++)
        cout  << arr[i] <<" ";
}
int main()
{
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 10};
    cout<<"Array: ";
    print_array(array);

    return 0;
}
#include <iostream>
using namespace std;

void print_array(int arr[],int szie)
{
    for (int i=0; i < 10; i++)
        cout  << arr[i] <<" ";
}
int main()
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 8, 10};
    int n=sizeof(array)/sizeof(array[0]);
    cout<<"Array: ";
    print_array(array,n);

    return 0;
}
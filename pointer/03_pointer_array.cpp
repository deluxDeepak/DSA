#include <iostream>
using namespace std;
int main()
{
    int arr[5]={12,56,34,56,67};
    // this will point the adress of frst element 
    int *ptr=arr;
    cout<<ptr <<endl;
    
    int *ptr2=&arr[0];
    cout<<ptr2 << endl;
    // this will point the second element 
    int *ptr1=&arr[1];
    cout<<ptr1<< endl;

    // printing the value of the array 
    for(int i=0;i<5;i++)
    {
        cout<<arr[i] << endl;
    }

    // printing the value of array 
    for(int i=0;i<5;i++)
    {
        cout<<*(arr +i) << endl;
    }

    // printing the value using ptr 
    for(int i=0;i<5;i++)
    {
        cout<<ptr[i] << endl;
    }

    // adress of array 
    for(int i=0;i<5;i++)
    {
        cout<<(arr+i) << endl;
    }



}
#include <iostream>
using namespace std;
void insertion_sort(int arr[],int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j >0; j--)
        {
            if (arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else
                break;
        }
        
    }
    

}

// print the sorted array 
void print(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    cout <<endl;
    
}
int main()
{
    int arr[]={23,1,67,44,22,9,33};
    int size=sizeof(arr)/sizeof(arr[0]);
    insertion_sort(arr,size);

    print(arr,size);
    return 0;
}
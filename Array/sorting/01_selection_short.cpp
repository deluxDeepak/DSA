#include <iostream>
using namespace std;

class bubble
{
public:
    // function to sort the array using bubble sort
    void bubble_sort(int arr[], int n)
    {
        // code for sorting 
        for (int i = n - 2; i >= 0; i--)
        {
            for (int j = 0; j <= i; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }
    }
};
int main()
{
    int arr[5] = {34, 67, 23, 1, 78};
    bubble s1;
    s1.bubble_sort(arr, 5);

    // sorted array 
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}
// Print the Array
#include <iostream>
using namespace std;
// N->Size of the Array
void printArray(int arr[], int index, int N)
{
    // Base case
    if (index == N)
        return;

    cout << arr[index] << " ";
    printArray(arr, index + 1, N);
}
int main()
{
    int arr[5] = {34, 23, 6, 7, 55};
    printArray(arr, 0, 5);

    return 0;
}
// Print number 1 to N
#include <iostream>
using namespace std;

void printNumber(int num, int N)
{
    // Base case
    if (num == N)
    {
        cout << num << endl;
        return;
    }

    cout << num << endl;
    printNumber(num + 1, N);
}
int main()
{
    int N = 7;
    printNumber(1, N);
}
// Fibonacci using Recurssion

// Only concerns: exponential time due to repeated recursion and no input handling/validation.
#include <iostream>
using namespace std;

int fibonacci(int num)
{
    // Base case
    if (num <= 1)
        return num;

    return fibonacci(num - 2) + fibonacci(num - 1);
}
int main()
{
    int num = 10;
    cout << "The fibonacci of " << num << " = " << fibonacci(num) << endl;
    return 0;
}

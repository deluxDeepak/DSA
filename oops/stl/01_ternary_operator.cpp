#include <iostream>
using namespace std;
int main()
{
    // using the ternary operator
    // ternary operator to find the mamximum
    int a = 5, b = 10;
    int max = (a > b) ? a : b;
    cout << "The maximum of " << a << " and " << b << " is " << max << endl;


    // ternary operator to check if the number is even or odd
    // witout using ternary operator 
    int num;
    cout<<"Enter a number: ";  // ask the user to enter a number
    cin>>num;
    if(num%2==0)
    {
        cout<<num<<" is even."<<endl;
    }
    else
        cout<<num<<" is odd." <<endl;

    // using ternary operator  
    (num%2==0) ? cout<<num <<" is even." <<endl : cout<<num <<" is odd." <<endl;

    // using ternery operator in cout statement
    cout <<(num%2==0 ? "Is Even." : "Is Odd.") <<endl;
    return 0;
}
#include <iostream>
#include <exception>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";  // taking input from user 
    cin >>a>>b;

    // ye define nahi hona chiye (divided by zero)
    try
    {
        throw "Error: Division by zero is not allowed!";
        int c=a/b;
        cout<<"The division of "<<a<<" by "<<b<<" is "<<c<<endl;
        return 1;
        
    }
    catch(const char* e)
    {
        cout << e << '\n';
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";  // taking input from user 
    cin >>a>>b;

    // ye define nahi hona chiye (divided by zero)
    
    if(b==0)
    {
     cout<<"Error: Division by zero is not allowed!"<<endl;
     return 1;
    }
    int c=a/b;
    cout<<"The division of "<<a<<" by "<<b<<" is "<<c<<endl;
    return 0;
}
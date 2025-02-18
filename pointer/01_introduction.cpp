#include <iostream>
using namespace std;
int main()
{
    int a=10;
    int *ptr=&a;
    // this is the adress of variable 
    cout<<ptr <<endl;
    cout<<&a <<endl;

    // this is the adress of pointer 
    cout<<&ptr << endl;

    // size of pointer 
    cout<<sizeof(ptr) <<endl;

    // printing the value of variable 
    cout << *ptr <<endl;
    cout << a <<endl;


}
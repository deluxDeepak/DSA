#include <iostream>
using namespace std;
int main()
{
    char arr[5]={"123"};
    char *ptr=arr;
    cout<<ptr <<endl;                       //print the value of string 
    cout<<arr;

    char name='d';
    char *ptr1=&name;
    // here random value is printed 
    
    cout<<ptr1<<endl;
    // this will give the adress 
    cout << (void*)ptr <<endl;
}
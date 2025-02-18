#include <iostream>
using namespace std;

void inc(int n)
{
    n++;
}

void inc_change(int *p)
{
    *p=*p+1;
}
int main()
{
    int x=23;
    // the value will not change (copy of the value will transfer)
    inc(x);
    cout <<"The value x is :" <<x << endl;


    // the value will change 
    inc_change(&x);
    cout <<"The value x is :" <<x << endl;
    return 0;

}
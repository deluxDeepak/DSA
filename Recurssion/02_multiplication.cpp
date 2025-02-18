#include <iostream>
using namespace std;

void fun(int a,int b)
{
    int res;
    if (b==0)
    {
        return;
    }
    res=a*b;
    fun( a, (b-1));
    cout<<res <<endl;
}

int main()
{
    // multiplicatin table of 3 
    fun(3,10);

}

#include <iostream>
using namespace std;

int fun(int a,int b)
{
    if (b==0)
    {
        return 0;
    }
    return a + fun(a,b-1);
}
int main()
{
    int res =fun(5,4);
    cout << res;
}
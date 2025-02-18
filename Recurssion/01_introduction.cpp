// Recursion :-A function which call itself again again .
// until a specific condition met.

// days left for birthday 

#include <iostream>
using namespace std;

void fun(int n)
{
    // base case dalna hoga (infinite times loop chalne lagega )
    if(n==2)
    {
        cout <<"Happy birthday";
        return ;
    }
    cout <<n <<" Days left for birthday " <<endl;
    fun(n-2);
}
int main()
{
    // // iterative approch 
    // int n=5;
    // for(int i=n;i>0;i--)
    // {
    //     cout << i <<" Days left for birthday" << endl;
    // }
    // cout<< "Happy birthday " <<endl;

    fun(14);
}

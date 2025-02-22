// noexcept is used when there is no exception in the function
// avoid unneccessary excpetion handling 
#include <iostream>
using namespace std;
void testfun() noexcept
{
    cout << "No exception handling in this function" << endl;
    // no exception will be thrown
}
void testfun1() noexcept
{
    throw 1; // exception will be thrown here
}
int main()
{
    try
    {
        testfun1(); // this will cause program termination with an error message 
    }
    catch(const exception& e)
    {
        cout << e.what() << '\n';
    }
    testfun();

    return 0;
} 

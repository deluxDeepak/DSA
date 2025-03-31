#include <iostream>
#include <exception>
using namespace std;
class negative_Number_Exception : public exception
{
    public:
    // function for negative exception using 
        const char*what() const noexcept override
    {
        return "Error: Negative number entered!";
    }
};
void check_number(int num)
{
    if (num<0)
    {
        throw negative_Number_Exception();
    }
    cout<<"Valid number :" <<endl;
    
}
int main()
{
    try
    {
        check_number(-29);
    }
    catch(const negative_Number_Exception& e)
    {
        cout <<"Caught the Error in line 13"<< e.what() << '\n';
    }
    
    return 0;
}
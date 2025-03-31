// creting custom classs for the excptiion
#include <iostream>
#include <exception>
using namespace std;

class Division_by_zero : public exception
{
public:
    // overrinding the what funxtion
    const char *what() const noexcept override
    {
        return "Divide by zero is not allowed !";
    }
};

int main()
{
    return 0;
}
// exception is an unexpected problem that asises during the execution of the program . It can be of two types:

// 1. Checked exception: These are exceptions that are checked at compile-time. If a checked exception is not handled, the program will terminate abruptly. Examples include FileNotFoundException, SQLException, etc.

// 2. Unchecked exception: These are exceptions that are not checked at compile-time(run time check). They are raised during the execution of the program. Examples include ArithmeticException, NullPointerException, etc.

// try explain
#include <iostream>
using namespace std;
int main()
{
    try
    {
        // yahan pe wo code hoga jo exception throw kar sakta hai 
        throw "Nme of exception!";
    }
    // exception catch karenge 
    catch(const char* e)
    {
        cout<<"Caught exception: " << e << endl;
    }
    
    return 0;
}


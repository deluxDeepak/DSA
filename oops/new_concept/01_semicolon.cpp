// why do we give semicolon at the end of the class ?
// 1.compiler check whether semicolon is missing at the end of the class or not.
// 2.user is trying to create instance of the class 
// 3.A class definition is considered as a declaration 
// declaration must end with semicolon 
#include <iostream>
using namespace std;
class semicolon
{
    int a,b;
    public:
    // default constructor 
    semicolon()
    {
        cout<<"Constructor called"<<endl;
    }
    // parameterized constructor 
    semicolon(int x,int y)
    {
        a = x;
        b = y;
        cout<<"Parameterized constructor called"<<endl;
    }
    void show()
    {
        cout<<"Dispaly the show button " <<endl;
    }

// }instance; // creating an object of the class
}instance={10,100}; //using the intilizer list to access parameterize constructor 

int main()
{
    cout<<"Hello, World!"<<endl;
    instance.show(); // calling default constructor
    return 0;
}

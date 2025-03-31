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

}instance(100,20);    //Global instance declaration and initialization with parameterized constructor
int main()
{
    cout<<"Hello, World!"<<endl;
    instance.show();              //Accesing the global instance 

    // craeting another local instance 
    semicolon localobj(30,90);      
    localobj.show();

    return 0;

}
#include <iostream>
using namespace std;
class base
{
    public:
    virtual void show()
    {
        cout <<"This is the base class :" <<endl;
    }
};

class derived:public base
{
    public:
    void show()
    {
        cout <<"This derived class  :" <<endl;
    }
};

int main()
{
    // direct call base class 
    // base obj;
    // obj.show();

    // direct call derived class 
    // derived obj1;
    // obj1.show();

    base*ptr;
    derived obj2;
    ptr=&obj2;
    ptr->show();

    return 0;
}
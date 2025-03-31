// override kab use hota hai
// override kab use hota hai jab base class ko override karna ho
#include <iostream>
using namespace std;
class base
{
public:
    // agr isko override karna hai to virtual class banana parega
    virtual void show()
    {
        cout << "This is the base class :" << endl;
    }
};
class derived : public base
{
public:
    void show() override
    {
        cout << "The derived  classs :" << endl;
    }
};
int main()
{
    // this will show the base class ka member  function (use override in derived class )
    derived obj;
    obj.show();
    return 0;
}
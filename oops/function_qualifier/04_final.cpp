// final qualifier is used to stop further overriding 
// more derived class jab use karte hai tab use hota hai bara project me 
#include <iostream>
using namespace std;

class base
{
public:
    // agr isko override karna hai to virtual class banana parega
    virtual void show() const
    {
        cout << "This is the base class :" << endl;
    }
    virtual void display() const
    {
        cout <<"Display the base classs :" <<endl;
    }
};
class derived : public base
{
public:
    // nonvirtual functio ko final nahi bana sakte hai 
    virtual void show()  const noexcept override
    {
        cout << "The derived  classs :" << endl;
    }
    virtual void display() const final
    {
        cout <<"Display the derived  classs :" <<endl;
    }

};
class more_derived : public derived
{
public:
    // this will show the error 
    // void show() override
    // {
    //     cout << "The  more derived  classs :" << endl;
    // }

    // isko override nahi kar sakte hai (override keyword nahi use karenge )
    // void display() 
    // {
    //     cout <<"This is more display" <<endl;
    // }


    // this will call the show of derived class 
    // void show()
    // {
    //     cout <<"This is more display" <<endl;
    // }

    // abhi ye calll hoga 
    // void show() const noexcept override
    // {
    //     cout <<"This is more display" <<endl;
    // }
    // agr override nahi karenge to 
    void show() const noexcept 
    {
        cout <<"This is more display" <<endl;
    }
};



int main()
{
    base *ptr;
    derived obj;
    more_derived obj1;
    // derived class 
    ptr=&obj;
    ptr->display();
    // more derived classs 
    ptr=&obj1;
    ptr->show();
    

    // more_derived obj1;
    // obj1.show();
    return 0;
}
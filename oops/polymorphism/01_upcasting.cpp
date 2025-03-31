#include <iostream>
using namespace std;
class Animal
{
    public:
    virtual void display()
    {
        cout<<"THe animal class :" <<endl;
    }
       
};
class dog:public Animal
{
    public:
    void display () override
    {
        cout<<"The dog class :" <<endl;
    }

};
int main()
{
    // accessing the base and derived class 
    // static polymorphism:
    // Animal *ptr;
    // dog d;

    // ptr = &d;
    // ptr->display();  // output: The dog class :
    
    // dynamic polymorphism 
    // Animal *ptr=new dog();
    // ptr->display();  // output: The dog class :

    // upcasting : when we assign a derived object to a base object, we are doing upcasting
    // downcasting ?

    // using the refernce 
    dog d;
    Animal &a=d;
    a.display();  // output: The dog class :

    // using the pointer 
    Animal *ptr=&d;
    ptr->display();  // output: The dog class :
    return 0;
}
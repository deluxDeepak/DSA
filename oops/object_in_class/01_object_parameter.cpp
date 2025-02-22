#include <iostream>
using namespace std;
class customer
{
    public:
    string name;
    int id;
    customer(string str,int i) :name(str),id(i) {}

    void display()
    {
        cout <<" Name :" <<name <<"Id :" <<id <<endl;
    }
};
// object as parameter pass kar rehehe hai wo bhi function me 
// tabhi tak rehega jab tak function cahlega 
class bank 
{
    public:
    // transfer the amount of person (from kiske to kisko )
    // customer1 and two 
    void transfer(customer &from,customer &to,double amount)
    {
        cout<<"Transfering $ " <<amount <<" from "<<from.name <<" to " <<to.name <<endl;

    }
};

int main()
{
    customer c1("Deepak",101);
    customer c2("Ramu",107);
    bank b;
    b.transfer(c1,c2,8000);
    
    return 0;
}
#include <iostream>
using namespace std;
class customer
{
public:
    int id;
    string name;
    customer(string str, int i) : name(str), id(i) {}
    void display()
    {
        cout << "Name :" << name << "\nId :" << id << endl;
    }
};
class bank
{
    // object as data member means it is define under private (better encapsulation)
private:
    customer account_holder; // yahaan object ka name change ho gya hai dhyan dena hai
    double balance;

public:
    bank(string str, int i, double bal) : account_holder(str, i)
    {
        balance = bal;
    }

    void show_account()
    {
        // name & id show
        account_holder.display();
        cout << "Blance :" << balance << endl;
    }
};
int main()
{
    bank b("Deepak", 109, 1000);
    b.show_account();

    return 0;
}
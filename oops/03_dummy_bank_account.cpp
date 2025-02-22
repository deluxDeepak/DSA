#include <iostream>
using namespace std;

// person(staff and customer )

// hirarical inheritance (multiple derived class from single base class )
// behaviour of person

// error hadling 
// file handling or database 
// more secure authentication method 
// transction logggin 

// otp store karna parega isme 
// aadhar verification
void aadhar()
{
}

// pancard_verfication
void pan_card()
{
}

// to verify_credentials then permit to enter (into details )
class verify_credentials
{
    void customer_credential()
    {
    }
    void staff_credential()
    {
    }
};

// if credentials needs to be updated
class update
{
    // verify the details or verify otp
    void update_customer_details()
    {
    }
    void update_staff_details()
    {
    }
};

// creating account
class create_account
{

    // type of create_account
public:
    void saving_account()
    {
    }
    void current_account()
    {
    }
    void fixed_deposit_account()
    {
    }
    void demat_account()
    {
    }
};

// for loan in the bank
class looan_bank
{
    // types of loan provided by the bank
public:
    void education_looan()
    {
    }
    void kissan_loan()
    {
    }
    void home_loan()
    {
    }
    void gold_loan()
    {
    }
    void start_up_loan()
    {
    }

    void healthcare()
    {
    }
    class insurance
    {
    public:
        void life_insurance()
        {
        }
        void general_insurance()
        {
        }
    };
};
class person
{
protected:
    string name;
    int id_person;
    // constructor to inilize the varible

public:
    // constructor with intilizer list
    person(string str, int i) : name(str), id_person(i) {}

    // display function
    void display()
    {
        cout << "Name :" << name << "\nId of Person :" << id_person << endl;
    }
};

// customer class
class customer : public person
{
private:
    double balance;

public:
    // directly person ko iniilize kar sakte hai

    // initilise the base class also
    customer(string str, int id, double ba) : person(str, id), balance(ba) {}

    // amount can be initilize here
    // deosite amount
    void deposite(double amount)
    {
        balance = balance + amount;
        cout << "Deposited amount " << amount << "\nNew Balance :" << balance << endl;
    }
    // withdraw amount
    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient funds :" << endl;
        }
        else
        {

            balance -= amount;
            cout << "Deposited amount " << amount << "\nNew Balance :" << balance << endl;
        }
    }
    // display balance
    void show_balance()
    {
        cout << "Name :" << name << "balnce :" << balance << endl;
    }
};

// online transation
class online
{
};

// staff class (to manage the comstomer )
class staff : public person
{
public:
    staff(string str, int id) : person(str, id) {}
    void manage_customer(customer &cust, double deposit_amount)
    {
        cout << "Staff is maneging the customer :" << endl;

        int value = 0;
        do
        {
            cout << "1.Deposite the money :" << endl;
            cout << "2.Withdraw the money :" << endl;
            cout << "3.Show  the money :" << endl;
            cout << "4.Exit transaction :" << endl;
            cout << "Choose the option :";
            cin >> value;

            switch (value)
            {
            case 1:
                cust.deposite(deposit_amount);

                break;
            case 2:
                cust.withdraw(deposit_amount);

                break;
            case 3:
                cust.show_balance();

                break;
            case 4:
                exit(1);
            default:
                cout << "Invalid option : ***Try again***" << endl;
                break;
            }
        } while (value != 4);
    }
};

int main()
{
    // person obj("deepak", 899);
    // obj.display();
    customer c1("Deepak", 101, 5000);

    // name of staff and id of staff
    staff s1("Rahul", 1010101);

    // deposite amount of customer
    s1.manage_customer(c1, 7000);

    return 0;
}
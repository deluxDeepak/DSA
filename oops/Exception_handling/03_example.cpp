// using class exception show the error ?
#include <iostream>
#include <exception>
using namespace std;

// classses like this exception 
// class exception
// {
//     private:
//     string msg;
//     public:
//     exception(string msg): msg(msg) {}

//     string what()
//     {
//         return msg;
//     }
    
// };
// class runtime_error:public exception
// {
//     public:
//     runtime_error(const string &msg): exception(msg) {}


// };

int main()
{
    int a ,b;
    
    try
    {
        cout << "Enter first number: ";
        cin >>a>>b;
        if(b==0)
        {
            // runtime error ka object banega 
            throw runtime_error("Division by zero is not allowed.");
        }
        int c =a/b;
        cout<<"Result :" <<c <<endl;
    }
    // object ko yahan se catch karenge 
    catch(const runtime_error & e)
    {
        // object ke msg ko show karega 
        cout <<"Error"<< e.what() << '\n';
        return 1;
    }
    // deafult catch block agr koi exception nahi chala to ye exception calega 
    catch(...)
    {
        cout << "An unknown error occurred.\n";
        return 1;
    }
    return 0;
}



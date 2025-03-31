#include <iostream>
using namespace std;
// for singleton design
class Singleton
{
private:
    // copy constructor and assignment operator are private to prevent them from being called accidentally
    static Singleton *instance;
    Singleton() {}

    // Deleted copy constructor and assignment operator to prevent copying
    Singleton(const Singleton &) = delete;
    Singleton &operator=(const Singleton &) = delete;

public:
    // static method to get the instance of singleton class
    static Singleton *getInstance()
    {
        if (instance == nullptr)
        {
            instance = new Singleton();
        }
        return instance;
    }
    // clenup method 
    static void destroyInstance()
    {
        delete instance;
        instance =nullptr;
    }
    ~Singleton()
    {
        cout<<"Singleton object destroyed\n";
    }
};

// static member defintion outside the class
Singleton *Singleton::instance = nullptr;
int main()
{
    // get sigleton instance with pointer 
    Singleton *s1 = Singleton::getInstance();
    Singleton *s2 = Singleton::getInstance();
    if(s1==s2)
    {
        cout<<"Both pointer points to the same instance \n";
    }

    // Added proper cleanup in main()
    Singleton::destroyInstance();
    return 0;
}
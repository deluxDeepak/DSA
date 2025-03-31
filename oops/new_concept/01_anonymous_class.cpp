// anonymous class 
// class ka kuch name nahi rehta hai 
#include <iostream>
using namespace std;
class
{
    // isme constructor nahi baan sakte hai 
    public:
    void show()
    {
        cout<<"This is show function of anonymous class\n";
    }
}instance;
int main()
{
    instance.show(); // calling the show function of anonymous class
    return 0;
}
// const qualifier uses 
// used with the function which read the data 
#include <iostream>
using namespace std;
class example
{
    public:
    int value;
    int get_data() const
    {
        cout<<"It can not modify the member variable " <<endl;
        return value;
    }
};
int main()
{
    example obj;
    obj.get_data();
    return 0;
}

// finding area of rectangle using friend function and overloading

#include <iostream>
using namespace std;
class rectangle
{
private:
    int length;
    float breadth;

public:
    // passing the value through constructor
    rectangle(int length, int breadth)
    {
        cout << "Enter the lenght and breadth of rectangle :";
        this->length = length;
        this->breadth = breadth;
    }

    // declaration of friend function and definiton in the class
    friend int area_of_rectangle(rectangle name)
    {
        return name.breadth * name.length;
    }
};
int main()
{
    rectangle rec(12, 4);
    cout << area_of_rectangle(rec) << endl;
    return 0;
}
// WAP that concates two string as private number in a class using friend function .the string must belong to different class .

#include <iostream>
using namespace std;

// forward declaration using the calss in friend function
class str2;
class str1
{
public:
    string s1;

public:
    str1(string s)
    {
        s1 = s;
    }
    friend string add_string(str1, str2);
};
class str2
{
public:
    string s2;

public:
    str2(string s)
    {
        s2 = s;
    }
    friend string add_string(str1, str2);
};

// class name (str1 )and object (a and b)
string add_string(str1 a, str2 b)
{
    return a.s1 + b.s2;
}
int main()
{
    str1 a("Deepak ");
    str2 b("kumar");
    cout << "Resulted string is :" << add_string(a, b) << endl;
    return 0;
}
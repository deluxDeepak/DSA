#include <iostream>
using namespace std;
int main()
{
    string s="Deepak";
    int start=0;
    while (s[start]!='\0')
    {
        start++;
    }
    // size of the string 
    cout<<start;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    string s="Deepak";

    // the last chacter of the string is at size minus one 
    int start=0,end=s.size()-1;
    while (start<end)
    {
        swap(s[start],s[end]);
        start++;
        end--;

    }
    // output reverse string 
    cout<<s;
    return 0;
}
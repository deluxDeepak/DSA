#include <iostream>
using namespace std;
int main()
{
    string s="Deepak is";
    cout<<s;

    // space problem when taking input 
    string var;
    // cin>>var;
    
    getline(cin,var);
    cout<<var;
}
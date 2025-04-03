#include <iostream>
using namespace std;
// string funtionality 

int main()
{
    string input;

    // it will not take the sapce in input 
    // cin >>input;
    // cout<<input;

    // ab ye space ke sath lega 
    getline(cin,input);
    cout<<input;
    

    return 0;
}
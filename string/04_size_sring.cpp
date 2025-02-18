#include <iostream>
using namespace std;
int main()
{
    string s="Deepak kumar";
    cout<<s.size();

    // adding two string 
    string s1="Deepak";
    string s2=" kumar";
    string s3=s1.append(s2);
    cout<<s3<<endl;

    // string some operation 
    string s4="deepak";
    s4.push_back('e');
    s4.pop_back();
    cout<<s4;

    // printing double quotes int the string 
    string quotes="Deepak is \"good\" boy" ;
    cout<<quotes <<endl;

    // this will not print any value 
    string null="\0";
    cout<< null;
}
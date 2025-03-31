#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // this is basic pair 
    // pair<int, string> p1 = make_pair(10, "Hello");
    // esceesing the element of pair 
    // pair <int,string>p1(10,"Deepak");
    pair <int,string>p1;
    p1={10,"Deepak"};

    cout <<p1.first << " " << p1.second << endl;
    return 0;
}
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void print_vec(vector<int>&vec)
{
    // size of vector 
    cout<<"Size of vector :" <<vec.size()<<endl;
    // printing vector elements
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    
}
int main()
{
    vector<int > v;
    // taking size of vector (taking vector as input )
    int n;
    cout << "Enter the size of vector: ";  // taking input from user
    cin >>n;
    for (int  i = 0; i < n;++ i)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    print_vec(v); // calling function to print vector 
    
    return 0;
}
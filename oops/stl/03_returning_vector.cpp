#include <iostream>
#include <vector>
using namespace std;
vector<int> create_vector()
{
    vector<int> v;
    for (int i = 0; i < 5; i++)
    {
        v.push_back(i * 2);
    }
    return v;
}
int main()
{
    // jo return type hai osi type me catch karte hai
    vector<int> v = create_vector();
    v.at(2) = 10; // update element in vector
    v[2] = 45;    // update element in vector

    // print vector element
    for (auto num : v)
    {
        cout << num << " ";
    }
    return 0;
}
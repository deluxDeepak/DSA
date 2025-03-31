#include <iostream>
#include <vector>
using namespace std;
void modify_vector(vector<int> &vec)
{
    vec.push_back(11);
    // priting the vector function
    cout << "Vector inside function :";
    for (auto num : vec)
    {
        cout << num << " ";
    }
}
int main()
{
    vector<int> v = {12, 13, 14, 15};
    cout << "Vector before function call :";
    for (auto num : v)
    {
        cout << num << " ";
    }
    cout << endl;
    modify_vector(v);
    cout << endl;
    cout << "Vector after function call :";
    for (auto num : v)
    {
        cout << num << " ";
    }
    return 0;
}
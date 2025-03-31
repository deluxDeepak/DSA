#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    // push back elements into the vector
    v.push_back(89);
    v.push_back(45);
    v.push_back(78);

    // alternative of push back (avoid unnecessary copy)
    v.emplace_back(77);

    // accessing the element of the vector using [] operator  (unsafe)
    // accessing the element of the vector
    cout << v[2] << endl;
    cout << v[3] << endl;
    // better option
    cout << v.at(3) << endl; // safer way to access the element of vector

    // accessing the first and last element of the vector using front() and back() methods respectively
    // front vector
    cout << v.front() << endl;
    // back vector
    cout << v.back() << endl;

    // size of the vector
    cout << v.size() << endl;

    // removing element from the vector
    v.pop_back();

    // check if the vector is empty
    // this is the example of ternary operator
    cout << (v.empty() ? "True" : "False") << endl;

    // inserting in the vector at specific position
    // from begning
    v.insert(v.begin(), 100); // khan insert karna hai aur kitna karna hai
    v.insert(v.begin() + 1, 200);

    // inserting from the end
    v.insert(v.end(), 1000);
    v.insert(v.end() - 1, 900);

    v.insert(v.begin(), 300); // khan insert karna hai aur kitna karna hai

    // alternative of insert (ye copy nahi create karta hai )
    v.emplace(v.begin(), 500); // khan emplace karna hai aur kitna karna hai  // emplace is faster than insert


    // ersing the element in the vector 
    v.erase(v.begin() + 1); // khan erase karna hai aur kitna karna hai
    v.erase(v.begin() + 1, v.begin() + 2);   // erasing a range of elements from the vector

    // print the vector
    for (auto num : v)
    {
        cout << num << " ";
    }
    // clear the vector
    v.clear();

    // removing all the element from the vector 
    v.erase(v.begin(),v.end());

    return 0;
}
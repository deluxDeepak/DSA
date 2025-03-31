#include <iostream>
using namespace std;
#include <cctype>
// to check if it is alphanumeric or not
bool contain_string(const string &str)
{
    bool has_ltter = false, has_digit = false;

    for (char ch : str)
    {
        // isalpha check karega ki isme letter hai ki nahi
        if (isalpha(ch))
            has_ltter = true;
        if (isdigit(ch))
            has_digit = true;
        // if both the condition is true then this is true
        if (has_ltter && has_digit)
            return true;
    }
    return false;
}
int main()
{
    string input;
    cin >> input;
    if (contain_string(input))
    {
        cout << "Vlid input it contins both letter and numbers " << endl;
    }
    else
        cout <<"Invalid expression :" <<endl;
    return 0;
}
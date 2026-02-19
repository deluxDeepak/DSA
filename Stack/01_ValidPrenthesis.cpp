#include <iostream>
#include <stack>
using namespace std;

// Time complexity ----- O(n)
// Space complexity ----- O(n)
bool checkValidParenthesis(const string &str)
{
    stack<char> st;
    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
        {
            st.push(str[i]);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            st.pop();
        }
    }
    // Satck yehan se 1 return karega jab 1 ayega to 
    // Means: jab stack empty ho jayega matalab matching complete ho gya 
    return st.empty();
}
int main()
{
    string str = "(())()";
    cout << checkValidParenthesis(str);

    return 0;
}
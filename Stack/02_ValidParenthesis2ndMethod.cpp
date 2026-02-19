#include <iostream>
#include <stack>
using namespace std;

// Time complexity ----- O(n)
// Space complexity ----- O(1)
bool checkValidParenthesis(const string &str)
{
    int leftCount=0;
    for (size_t i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
        {
            leftCount++;
        }
        else
        {
            if (leftCount==0)
            {
                return true;
            }
            leftCount--;
        }
    }
    return leftCount;
}
int main()
{
    string str = "(())))";
    cout << checkValidParenthesis(str);

    return 0;
}
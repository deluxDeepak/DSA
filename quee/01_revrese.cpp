#include <iostream>
#include <stack>
#include <queue>

using namespace std;
int main()
{
    // PUSHING INTO THE QUEUE
    queue<int> q;
    stack<int> s;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    // pushing first k element into the stack
    int k = 3;
    // revesing the quee till first kth element

    while (k--)
    {
        s.push(q.front());
        q.pop();
    }

    int n = q.size();
    while (!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    while (n--)
    {
        q.push(q.front());
        q.pop();
    }

    // PRINTING THE ELEMENT
    while (!q.empty())
    {
        cout <<q.front();
        q.pop();
    }
    

    return 0;
}
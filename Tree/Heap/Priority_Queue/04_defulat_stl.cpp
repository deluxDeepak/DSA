// max heap using stl (default max heap)
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int>pq;
    pq.push(34);
    pq.push(56);
    pq.push(78);
    pq.push(4);
    pq.push(89);
    cout<<"Top element of pq:"<<pq.top()<<endl;
    // Top element is deleted from the queue 
    pq.pop();
    return 0;
}
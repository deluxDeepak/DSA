#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> min_heap;
    min_heap.push(56);
    min_heap.push(45);
    min_heap.push(66);
    min_heap.push(23);
    min_heap.push(90);
    cout << "The top element(min element) of pq:" << min_heap.top() << endl;
    min_heap.pop();

    return 0;
}
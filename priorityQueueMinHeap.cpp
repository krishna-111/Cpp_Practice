//STL section - priority queue - L1
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(10);
    pq.push(5);
    pq.push(20);
    pq.push(1);
    cout<<pq.size()<<endl;
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
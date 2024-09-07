#include<iostream>
#include<queue>
using namespace std;
int main()
{

    priority_queue<int> pq;
    if(pq.empty())
    {
        cout<<"priority queue is empty"<<endl;
    }
    pq.push(56);
    pq.push(15);
    pq.push(99);
    pq.push(9);
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    if(pq.empty())
    {
        cout<<"priority queue is empty"<<endl;
    }
    pq.pop();
    cout<<pq.top()<<endl;
    priority_queue<int,vector<int>,greater<int>> pq2;
    pq2.push(56);
    pq2.push(15);
    pq2.push(99);
    pq2.push(9);
    cout<<pq2.top()<<endl;
    cout<<pq2.size()<<endl;
    while(!pq2.empty())
    {
        cout<<pq2.top();
        pq2.pop();
        cout<<endl;
    }
    return 0;
}


#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<q.empty()<<endl;
    while(q.empty()!=1)
    {
        cout<<q.front()<<" "<<q.back()<<" ";
        cout<<endl;
        cout<<q.size()<<endl;
        q.pop();
    }
}
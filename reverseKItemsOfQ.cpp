#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse(queue<int> q,int k)
{
    stack<int> s;
    while(k!=0)
    {
        s.push(q.front());
        q.pop();
        k--;
    }
    int top = s.top();
    while(s.empty()!=1)
    {
        q.push(s.top());
        s.pop();
    }
    while(q.front()!=top)
    {
        int l=q.front();
        q.pop();
        q.push(l);
    }
    while(q.empty()!=1)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return;
}
int main()
{
    queue<int> q;
    q.push(10);q.push(20);q.push(30);q.push(40);q.push(50);
    int k;
    cout<<"Enter how many elements you want to be reversed"<<endl;
    cin>>k;
    reverse(q,k);
    return 0;
}
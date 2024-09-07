#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverse(queue<int> &q,int n,int k)
{
    if(q.empty() or k>n or k<=-1)
    return;
    stack<int> st;
    for(int i=0;i<k;i++)
    {
        st.push(q.front());
        q.pop();
    }
    for(int i=0;i<k;i++)
    {
        q.push(st.top());
        st.pop();
    }
    for(int i=0;i<n-k;i++)
    {
        q.push(q.front());
        q.pop();

    }


}
int main()
{
    queue<int> q;
    int n;
    cout<<"Enter the number of elements you want to insert in queue"<<endl;
    cin>>n;
    cout<<"Enter the elelments of the queue"<<endl;
    int k;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        q.push(k);
    }
    cout<<"Enter the elements you want to reverse"<<endl;
    int k1;
    cin>>k1;
    
    reverse(q,n,k1);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
    return 0;
}
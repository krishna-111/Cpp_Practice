//STL section - priority queue - L1
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int arr[]={20,3,5,65,1};
    priority_queue<int> pq(arr,arr+5);
    cout<<pq.size()<<endl;
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    for(int i=0;i<sizeof(arr)/sizeof(int);i++)
    {
        arr[i]=-arr[i];
    }
    priority_queue<int> pq1(arr,arr+5);
    cout<<pq1.size()<<endl;
    while(pq1.empty()==false)
    {
        cout<<-pq1.top()<<" ";
        pq1.pop();
    }
}
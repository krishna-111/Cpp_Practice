//Min heap based approach (priority queue-L3-STL section)
#include<iostream>
#include<queue>
using namespace std;
void printmax(int arr[],int n,int k)
{
    priority_queue<int,vector<int>,greater<int>> pq(arr,arr+k);
    for(int i=k;i<n;i++)
    {
        if(pq.top()<arr[i])
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    while(pq.empty()==false)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return;
}
int main()
{
int arr[]={110,250,30,5640,5};
    int k;
    cout<<"Enter the no. of elements you wanted to be printed"<<endl;
    cin>>k;
    printmax(arr,5,k);
    return 0;
}
#include<iostream>
#include<queue>
using namespace std;
void printkmax(int *arr,int n,int k)
{
    priority_queue<int,vector<int>,greater<int>> pq(arr,arr+k);
    for(int i=k;i<n;i++)
    {
        if(arr[i]<pq.top())
        {
            continue;
        }
        else
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    cout<<"The top k maximum elements are"<<endl;
    while(!pq.empty())
    {
        cout<<pq.top()<<"  ";
        pq.pop();
    }


}
int main()
{
    int n;
    cout<<"Enter the number of elements you want in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the maximum number of elements you wanted to be printed"<<endl;
    cin>>k;
    printkmax(arr,n,k);

}

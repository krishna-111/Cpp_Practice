#include<iostream>
#include<queue>
using namespace std;
void sorted1(int *arr,int n)
{
    priority_queue<int,vector<int>,greater<int>> pq(arr,arr+n);
    int i=0;
    while(!pq.empty())
    {
        arr[i]=pq.top();
        pq.pop();
        i++;

    }

}
int main()
{
    int n;
    cout<<"Enter the number of elements you want"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sorted1(arr,n);
    cout<<"After sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
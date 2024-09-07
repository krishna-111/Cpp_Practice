#include<iostream>
#include<queue>
using namespace std;
void sorted(int *arr,int n)
{
    priority_queue<int> pq(arr,arr+n);
    for(int i=n-1;i>=0;i--)
    {
        arr[i]=pq.top();
        pq.pop();
    }
}
int main()
{
    int n;
    
    cout<<"Enter the number of elements you want in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sorted(arr,n);
    cout<<"Array after sorting is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
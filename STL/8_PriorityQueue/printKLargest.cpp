#include<iostream>
#include<queue>
using namespace std;
void printkmax(int *arr,int n,int k)
{
    priority_queue<int> pq(arr,arr+n);

    while(k!=0)
    {
        cout<<pq.top()<<endl;
        pq.pop();
        k--;
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

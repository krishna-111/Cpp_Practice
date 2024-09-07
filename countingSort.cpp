#include<iostream>
using namespace std;
void counting(int *arr,int k,int n)
{
    int count[k];
    for(int i=0;i<k;i++)
    count[i]=0;
    for(int i=0;i<n;i++)
    count[arr[i]]++;
    for(int i=1;i<k;i++)
    count[i]+=count[i-1];
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++)
    arr[i]=output[i];
}
int main()
{
    int n;
    cout<<"Enter the number of elements you want in array"<<endl;
    cin>>n;
    cout<<"Enter the maximum element you want to enter"<<endl;
    int k;
    cin>>k;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    counting(arr,k+1,n);
    cout<<"After sorting elements are"<<endl;
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}
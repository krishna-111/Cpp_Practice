#include<iostream>
using namespace std;
void counting(int *arr,int n)
{
    int b[10]={0};
    for(int i=0;i<n;i++)
    {
        b[arr[i]]++;
    }
    for(int i=0;i<10;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<10;i++)
    {
        b[i]+=b[i-1];
    }
    for(int i=0;i<10;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    int result[n];
    for(int i=n-1;i>=0;i--)
    {
        result[b[arr[i]]-1]=arr[i];
        b[arr[i]]--;
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=result[i];
    }
}
int main()
{
    int n;
    cout<<"Enter the no. of elements of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    counting(arr,n);
    cout<<"After sorting array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
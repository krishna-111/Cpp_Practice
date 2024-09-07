#include<iostream>
using namespace std;
void counting(int *arr,int n,int exp)
{
    int count[10];
    for(int i=0;i<10;i++)
    count[i]=0;
    for(int i=0;i<n;i++)
    count[(arr[i]/exp)%10]++;
    for(int i=1;i<10;i++)
    count[i]+=count[i-1];
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[count[(arr[i]/exp)%10]-1]=arr[i];
        count[(arr[i]/exp)%10]--;
    }
    for(int i=0;i<n;i++)
    arr[i]=output[i];
}
void radix(int *arr,int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    for(int exp=1;max/exp>0;exp=exp*10)
    {
        counting(arr,n,exp);
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
    radix(arr,n);
    cout<<"After sorting elements are"<<endl;
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
}
#include<iostream>
using namespace std;
int slidingsum(int *arr,int n,int m)
{
    int sum=0;
    int result;
    int j=0;
    int k=m;
    while(k!=0)
    {
        sum+=arr[j++];
        k--;
    }
    cout<<sum<<endl;
    result = sum;
  
    for(int i=1;i<n-m+1;i++)
    {
        sum = sum-arr[i-1]+arr[i+m-1];
        cout<<sum<<endl;
        if(sum>result)
        {
            result = sum;
        }

    }
    return result;
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
    int k;
    cout<<"Enter the value of sliding window"<<endl;
    cin>>k;
    int sum = slidingsum(arr,n,k);
    cout<<"The maximum sliding window sum is "<<sum;
    return 0;

}

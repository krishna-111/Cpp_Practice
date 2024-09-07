#include<iostream>
using namespace std;
int largestevenodd(int *arr,int n)
{
    int sum=0,count=1;
    for(int i=1;i<n;i++)
    {
        if((arr[i]%2==0 && arr[i-1]%2!=0) ||(arr[i]%2!=0 && arr[i-1]%2==0) )
        {
            count++;
            if(i==n-1 && count>sum)
            {
                sum=count;
            }
        }
        else{
            if(count>sum)
            {
                sum=count;
                count=1;
            }
        }
    }
    return sum;
}
int main()
{
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int count = largestevenodd(arr,size);
    cout<<"The largest length of even odd subarray is "<<count<<endl;
    return 0;
}
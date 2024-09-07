#include<iostream>
#include<limits>
#include<cstdlib>
using namespace std;
int min(int *arr,int n)
{
    if(n==1)
    {
        return -1;
    }
    int min=numeric_limits<int>::max();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            continue;
            if(abs(arr[i]-arr[j])<min)
            min=abs(arr[i]-arr[j]);
        }
    }
    return min;
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
    int k=min(arr,n);
    cout<<"The minimum distance is"<<endl;
    cout<<k;
}
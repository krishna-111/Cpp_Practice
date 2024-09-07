#include<iostream>
using namespace std;
int binary(int *arr,int n,int x)
{
    int i=0;
    int j=n;
    
    while(i<=j)
    {
        int mid = (i+j)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]<x)
        {
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return -1;
}
int main()
{
    cout<<"Enter the number of elements you want in array"<<endl;
    int n;
    cin>>n;
    cout<<"Enter the elements of the array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the element to be searched"<<endl;
    cin>>x;
    int result = binary(arr,n-1,x);
    cout<<"The elements found at "<<result<<" location"<<endl;
    return 0;
}
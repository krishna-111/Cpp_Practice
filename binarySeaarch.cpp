#include<iostream>
using namespace std;
int binary(int *arr,int k,int n,int x)
{
    if(k>n)
    {
        
        return -1;
    }
    else{

    int mid = (k+n)/2;
    if(arr[mid]==x)
    {
        return mid;
    }
    else{
        if(arr[mid]>x)
        {
           return  binary(arr,k,mid-1,x);
        }
        else if(arr[mid]<x)
        {
           return binary(arr,mid+1,n,x);
        }
    }
    }

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
    int k=0;
    int result = binary(arr,k,n-1,x);
    cout<<"The elements found at "<<result<<" location"<<endl;
    return 0;
}
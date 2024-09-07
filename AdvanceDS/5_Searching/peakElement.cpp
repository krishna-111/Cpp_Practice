#include<iostream>
using namespace std;
int peak(int *arr,int n)
{
  int i=0;
  int j=n-1;
  while(i<=j)  
  {
    int mid = (i+j)/2;
    if(mid == 0 && arr[mid]>=arr[mid+1])
    {
        return arr[mid];
    }
    else if(mid==(n-1) && arr[mid]>=arr[mid-1])
    {
        return arr[mid];
    }
    else if(arr[mid]>=arr[mid-1]&& arr[mid]>=arr[mid+1])
    {
        return arr[mid];
    }
    else if(arr[mid]>=arr[mid-1] && arr[mid]<arr[mid+1])
    {
        i=mid+1;
    }
    else if(arr[mid]<arr[mid-1] && arr[mid]>=arr[mid+1])
    {
        j=mid-1;
    }
    else{
        i=mid+1;
    }

    }
  }
    

int main()
{
    int n;

    cout<<"Enter the number of elements you want"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int res = peak(arr,n);
    cout<<"The peak element present is "<<res<<endl;
    return 0;


}
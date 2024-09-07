#include<iostream>
#include<algorithm>
using namespace std;
 int max(int *arr,int n)
 {
    int temp = 0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[temp])
        {
            temp = i;
        }
    }
    return temp;
 }

  void rightrotate(int *arr,int n)
  {
    int temp = arr[n-1];
    for(int i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=temp;

  }
  int binary(int *arr,int n,int k)
  {
    int l=0,h=n-1;
    while(l<=h)
    {
        int mid = (l+h)/2;
        if(arr[mid]==k)
        {return mid;}
        else if(arr[mid]>k)
        {
            h=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    return -1;
  }
int find(int *arr,int n,int k){
    int maxi = max(arr,n);
    cout<<maxi<<endl;
    int diff = n-1-maxi;
    int x=diff;
    while(diff>0)
    {
        rightrotate(arr,n);
        diff--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int res = binary(arr,n,k);
    return res-x;

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
    int k;
    cout<<"enter the element you want to search"<<endl;
    cin>>k;
    
    int res = find(arr,n,k);
    cout<<"The element present at "<<res<<endl;
    return 0;


}
#include<iostream>
using namespace std;
int merge(int *arr,int i,int mid,int j)
{
    int x=(mid-i+1);
   int y=(j-mid);
   int arr1[x];
   int arr2[y];
   
   int l=i;
   int m=i;
   for(int k=0;k<x;k++)
   {
    arr1[k]=arr[l];
    l++;
   }
   l=i;
   int z=mid+1;
   for(int k=0;k<y;k++)
   {
   arr2[k]=arr[z];
    z++;
   }
   z=mid+1;
   int l1=0;
   int z1=0;
   while(l1<x && z1<y)
   {
    if(arr1[l1]>arr2[z1])
    {
        arr[m]=arr2[z1];
        z1++;
        m++;
    }
    else{
        arr[m]=arr1[l1];
        l1++;
        m++;
    }
   }
   
    while(z1<y)
    {
        arr[m]=arr2[z1];
        z1++;
        m++;
    }
    
    while(l1<x)
    {
        arr[m]=arr1[l1];
        m++;
        l1++;
    }
    return 0;
   }
int mergesort(int *arr,int i,int j)
{
    if(i<j)
    {
    int mid=(i+j)/2;
    mergesort(arr,i,mid);
    mergesort(arr,mid+1,j);
    merge(arr,i,mid,j);
    }
    return 1;

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
    mergesort(arr,0,n-1);
    cout<<"After sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 1;
}
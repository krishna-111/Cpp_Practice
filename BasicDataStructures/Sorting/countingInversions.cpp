#include<iostream>
using namespace std;
int invert = 0;
void merge(int *arr,int first,int mid,int last)
{
    int n1=mid-first+1;
    int n2=last-mid;
    int arr1[n1];
    int arr2[n2];
    for(int i=0;i<n1;i++)
    {
        arr1[i]=arr[i+first];
    }
    for(int j=0;j<n2;j++)
    {
        arr2[j]=arr[mid+1+j];
    }
    int i,j,k;
    for(i=0,j=0,k=first;i<n1 && j<n2;k++)
    {
        if(arr1[i]<=arr2[j])
        {
            arr[k]=arr1[i];
            i++;
        }
        else{
            arr[k]=arr2[j];
            j++;
            invert += (n1-i);
        }
    }
    while(i<n1)
    {
        arr[k++]=arr1[i++];
    }
    while(j<n2)
    {
        arr[k++]=arr2[j++];
    }
    
}
void count(int *arr,int l,int r)
{
    if(r>l)
    {
        int mid = l+(r-l)/2;
       count(arr,l,mid);
       count(arr,mid+1,r);
        merge(arr,l,mid,r);
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
    count(arr,0,n-1);
    cout<<"The no. of invesions are"<<endl;
    cout<<invert<<endl;
    return 0;
}
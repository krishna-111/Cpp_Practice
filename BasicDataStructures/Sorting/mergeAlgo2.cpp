#include<iostream>
using namespace std;
void merge(int *arr,int n,int first,int mid,int last)
{
    int b[n];
    int i,j,k;
    for( i=0,j=mid+1,k=0;i<mid+1 && j<=last ; k++)
    {
        if(arr[i]<=arr[j])
        {
            b[k]=arr[i];
            i++;
        }
        else{
            b[k]=arr[j];
            j++;
        }
    }
    while(i<=mid)
    {
        b[k++]=arr[i++];
    }
    while(j<=last)
    {
        b[k++]=arr[j++];
    }
    for(int l=0;l<n;l++)
    {
        cout<<b[l]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int mid;
    cout<<"enter the mid position"<<endl;
    cin>>mid;
    merge(arr,n,0,mid,n-1);
    return 0;
}
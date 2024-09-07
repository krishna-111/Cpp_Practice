#include<iostream>
using namespace std;
int lamuto(int *arr,int l,int r)
{
    int pivot = arr[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }

    }
    int temp2=arr[i+1];
    arr[i+1]=pivot;
    arr[r]=temp2;
    return i+1;
    
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
    int index = lamuto(arr,0,n-1);
    cout<<"Index after partition is "<<index<<endl;
    cout<<"Array after partition is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
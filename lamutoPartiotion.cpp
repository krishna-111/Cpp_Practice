#include<iostream>
using namespace std;
int lamuto(int *arr,int l,int h)
{
    int pivot=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[h];
    arr[h]=arr[i+1];
    arr[i+1]=temp;
    cout<<"After first partition elements are"<<endl;
    for(int i=l;i<=h;i++)
    {
        cout<<arr[i]<<" ";
    }
    return (i+1);
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
    int h = lamuto(arr,0,n-1);
    cout<<"Pivot present in "<<h <<" place"<<endl;
    return 0;
}
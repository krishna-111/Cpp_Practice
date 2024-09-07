#include<iostream>
using namespace std;
int partition(int *arr,int l,int r)
{
    int pivot = arr[r];
    int j=l-1;
    int i;
    for(i=l;i<r;i++)
    {
        if(arr[i]<pivot)
        {
            j++;
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }

    }
    int temp2=arr[j+1];
    arr[j+1]=pivot;
    arr[r]=temp2;
    return (j+1);


}
void quicksort(int *arr,int l,int r)
{
    if(l<r)
    {
        int pivot = partition(arr,l,r);
        quicksort(arr,l,pivot-1);
        quicksort(arr,pivot+1,r);
    }
}
int main()
{
    int n;
    cout<<"Enter the no. of elements you want"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements you want"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,n-1);
    cout<<"Array after sorting is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
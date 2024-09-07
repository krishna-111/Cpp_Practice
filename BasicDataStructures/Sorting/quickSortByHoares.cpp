#include<iostream>
using namespace std;
int partition(int *arr,int l,int r)
{
    int pivot = arr[l];
    int i=l-1;
    int j=r+1;
    while (true)
    {
        do
        {
           i++; 
        } while (arr[i]<pivot);
        do
        {
            j--;
        } while (arr[j]>pivot);
        if(i>=j)
        return j;
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        
        
    }

}
void quicksort(int *arr,int l,int r)
{
    if(l<r)
    {
        int pivot = partition(arr,l,r);
        quicksort(arr,l,pivot);
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
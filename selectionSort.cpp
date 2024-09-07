#include<iostream>
using namespace std;
int selection_sort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int temp=999999;
        int k;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<temp)
            {
                k=j;
                temp=arr[j];
            }

        }
        int temp2=arr[i];
        arr[i]=arr[k];
        arr[k]=temp2;

    }
    cout<<"After sorting"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
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
    selection_sort(arr,n);
    return 0;
}
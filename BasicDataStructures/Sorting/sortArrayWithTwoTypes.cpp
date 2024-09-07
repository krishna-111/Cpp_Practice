#include<iostream>
using namespace std;
void found(int *arr,int n)
{
    int i=0,j=0;
    for(i;i<n;i++)
    {
        if(arr[i]>=0)
        {
            continue;
        }
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j++;
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
    found(arr,n);
    cout<<"The array after sorting is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
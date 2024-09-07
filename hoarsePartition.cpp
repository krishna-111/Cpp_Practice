#include<iostream>
using namespace std;
int hoars(int *arr,int l,int h)
{
    int pivot = arr[l];
    int i=l-1;
    int j=h+1;
    while(1)
    {
        i++;
        while(arr[i]<pivot)
        {
            i++;
        }
        j--;
        while(arr[j]>pivot)
        {
            j--;
        }
        if(j<=i)
        return j;
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
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
    int k= hoars(arr,0,n-1);
    cout<<k<<endl;
    cout<<"The elements after partition are"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
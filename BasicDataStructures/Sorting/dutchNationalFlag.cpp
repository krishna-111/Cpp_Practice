#include<iostream>
using namespace std;
void found(int *arr,int n)
{
    int l=0,mid=0,h=n-1;
    while(mid<=h)
    {
        if(arr[mid]==0)
        {
            int temp = arr[l];
            arr[l]=arr[mid];
            arr[mid]=temp;
            l++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else{
            int temp = arr[h];
            arr[h]=arr[mid];
            arr[mid]=temp;
            h--;

        }
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
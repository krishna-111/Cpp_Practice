#include<iostream>
using namespace std;
int insertion_sort(int *arr,int n)
{
    for(int i=1;i<n;i++)
    {
        
        for(int j=i;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            else{
                break;
            }
        }

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
    insertion_sort(arr,n);
    return 0;
}
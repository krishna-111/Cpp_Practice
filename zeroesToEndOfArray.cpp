#include<iostream>
using namespace std;


int shift(int *arr,int n)
{
    int i,j;
    for(i=0,j=0;i<n;)
    {
        
        if(arr[i]==0)
        {
            i++;
        }
        else{
            int temp=arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            j++;
            i++;
        }

    }
    cout<<"After arrangement"<<endl;
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
    return 1;
}
int main()
{
    int n;
    cout<<"Enter the no. of elements you want to enter"<<endl;
    cin>>n;
    if(n==0)
    {
        cout<<"Enter the appropriate size"<<endl;
        return 0;
    }
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    shift(arr,n);
    return 0;
}
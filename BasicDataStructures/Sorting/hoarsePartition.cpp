#include<iostream>
using namespace std;
int hoares(int *arr,int l,int r)
{
    int pivot = arr[l];
    int i=l-1;
    int j=r+1;
    while(true)
    {
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)
        {
            return j;
        }
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

    }
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
    int index = hoares(arr,0,n-1);
    cout<<"Index after partition is "<<index<<endl;
    cout<<"Array after partition is "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
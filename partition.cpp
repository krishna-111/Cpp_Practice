#include<iostream>
using namespace std;
void partition(int *arr,int first,int last)
{
    int pivot = arr[last];
    cout<<pivot<<endl;
    int i=0;
    int j=first;
    while(j<=last)
    {
        if(arr[j]>=pivot)
        {
            j++;
        }
        else if(arr[j]<pivot)
        {
            
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j++;
        }

    }
    arr[last]=arr[i];
    arr[i]=pivot;


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
    partition(arr,0,n-1);
    cout<<"After the first partition the elements are"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
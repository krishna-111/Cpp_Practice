#include<iostream>
using namespace std;
void selectionsort(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                int temp = arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            else{
                break;
            }
        }
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
    selectionsort(arr,n);
    cout<<"After sorting elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;


}
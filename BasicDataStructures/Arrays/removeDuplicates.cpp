#include<iostream>
using namespace std;
int remove(int *arr,int size)
{
    int temp = size;
    for(int i=size-1;i>0;i--)
    {
        if(arr[i]==arr[i-1])
        {
            for(int j=i+1;j<temp;j++)
            {
                arr[j-1]=arr[j];
            }
            temp--;

        }
    }
    return temp;
}
int main()
{
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int temp = remove(arr,size);
    for(int i=0;i<temp;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;



}
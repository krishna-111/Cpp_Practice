#include<iostream>
using namespace std;
void leftrotate(int *arr,int n,int d)
{
    int arr2[d];
    for(int i=0;i<d;i++)
    {
        arr2[i]=arr[i];
    }
    for(int i=d;i<n;i++)
    {
        arr[i-d]=arr[i];
    }
    for(int j=n-d,i=0;j<n;j++,i++)
    {
        arr[j]=arr2[i];
    }


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
    int d;
    cout<<"Enter the no. of positions you want to rotate"<<endl;
    cin>>d;
    leftrotate(arr,size,d);
    cout<<"The array after rotation is "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
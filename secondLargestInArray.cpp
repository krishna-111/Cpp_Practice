#include<iostream>
using namespace std;
int secondlargest(int *arr,int n)
{
    if(n==1)
    return arr[0];
    int first,second;
    first = second = arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>first){
        second=first;
        first=arr[i];
        }
        else if(arr[i]>second)
        second=arr[i];
    }
    if(first==second)
    return -1;
    else
    return second;

}
int main()
{
    int n;
    cout<<"Enter the no. of elements you want in an array"<<endl;
    cin>>n;
    if(n==0){
    cout<<"please enter valid size"<<endl;
    return 0;}
    cout<<"Enter the elements of array"<<endl;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int result = secondlargest(arr,n);
    cout<<result<<endl;
    return 0;

}
#include<iostream>
using namespace std;
int largest(int arr[],int n)
{
    int max=-99999;
    for(int j=0;j<n;j++)
    {
        if(max<arr[j])
        max=arr[j];
    }
return max;

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
    int result = largest(arr,n);
    cout<<result<<endl;
    return 0;

}
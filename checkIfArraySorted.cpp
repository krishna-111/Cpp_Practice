#include<iostream>
using namespace std;
bool isSorted(int *arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        return false;
    }
    return true;
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
    bool result = isSorted(arr,n);
    if(result)
    cout<<"Array is sorted";
    else
    cout<<"Array is not sorted";
    return 0;

}
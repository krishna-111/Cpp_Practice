#include<iostream>
using namespace std;
int prefixsum(int *arr,int n,int a,int b)
{
    int result=0;
    for(int i=a;i<=b;i++)
    {
        result += arr[i];
    }
    return result;
}

int main()
{
    int n;
    cout<<"Enter the no. of elements of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int prefix;
    cout<<"Enter the prefix you want"<<endl;
    cin>>prefix;
    int postfix;
    cout<<"Enter the postfix you want"<<endl;
    cin>>postfix;
    int sum = prefixsum(arr,n,prefix,postfix);
    cout<<"The required prefix sum is "<<sum;

    
    return 0;
}
#include<iostream>
using namespace std;
int findmajority(int *arr,int n)
{
    int count=1,result=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]==arr[result])
        {
            count++;
        }
        else{
            count--;
            if(count==0)
            {
                count=1;
                result = i;
            }
        }
    }
    count = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[result])
        {
            count++;
        }
    }
    if(count>n/2)
    {
        return arr[result];
    }
    return -1;
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
    int majority = findmajority(arr,n);
    if(majority==-1)
    {
        cout<<"This array does not contain any majority elelment";
        return 0;
    }
    cout<<"The majority element is "<<majority<<endl;
    return 0;
}
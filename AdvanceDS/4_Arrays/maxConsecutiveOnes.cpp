#include<iostream>

using namespace std;
int maxones(int *arr,int n)
{
    int temp=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
        }
        else{
            if(count>temp)
            temp=count;
            count=0;
        }
    }
    return temp>count?temp:count;

}


int main()
{
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the boolean array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int count = maxones(arr,size);
    cout<<"The maximum number of consecutive ones are "<<count<<endl;
    return 0;

}
#include<iostream>
using namespace std;
double max(int arr[],int number)
{
    int big =-1000000;
    for(int i=0;i<number;i++)
    {
        if(arr[i]>big)
        big=arr[i];
    }
    return big;
}
int main()
{
    cout<<"Enter the no. of elements you want"<<endl;
    int number;
    cin>>number;
    cout<<"Enter the elements of the array"<<endl;
    int arr[number];
    for(int i=0;i<number;i++)
    {
        cin>>arr[i];

    }
    int result = max(arr,number);
    cout<<result;
    return 1;
}
#include<iostream>
using namespace std;
int sum(int arr[],int number)
{
    int add =0;
    for(int i=0;i<number;i++)
    {
        add=add+arr[i];
    }
    return add;
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
    int result = sum(arr,number);
    cout<<result;
    return 1;
}
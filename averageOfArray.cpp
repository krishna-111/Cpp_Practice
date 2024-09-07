#include<iostream>
using namespace std;
double avg(int arr[],int number)
{
    int add =0;
    for(int i=0;i<number;i++)
    {
        add=add+arr[i];
    }
    return add/number;
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
    double result = avg(arr,number);
    cout<<result;
    return 1;
}
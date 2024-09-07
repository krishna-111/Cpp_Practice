#include<iostream>
using namespace std;
int reverse(int *arr,int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        int temp;
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    cout<<"The elements after reversing array are"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    return 1;
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
    reverse(arr,n);
    
    return 0;

}
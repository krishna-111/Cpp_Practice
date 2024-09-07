#include<iostream>
using namespace std;
int left_rotate(int *arr,int n)
{
    static int a=1;
    int temp=arr[0];
    int i;
    for(i=0;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[i]=temp;
    cout<<"Elements after " <<a <<" left reversal are"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    a++;
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
    
    int d;
    cout<<"Enter how many times you want rotation to be done"<<endl;
    cin>>d;
    while(d!=0){
    left_rotate(arr,n);
    d--;
    }
   
    return 0;

}
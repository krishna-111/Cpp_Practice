#include<iostream>
using namespace std;
int shift(int *arr,int n,int d)
{
    int temp,temp2=0;
    while(d!=0)
    {
        int i;
        temp=arr[0];
        for(i=1;i<=n-1;i++)
        {
            
            arr[i-1]=arr[i];

        }
        temp2++;
        arr[i-1]=temp;
        cout<<"Elements after "<<temp2<<" rotation are"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        d--;
    }
}
int main()
{
    int n;
    cout<<"Enter the no. of elements you want to enter"<<endl;
    cin>>n;
    if(n==0)
    {
        cout<<"Enter the appropriate size"<<endl;
        return 0;
    }
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int d;
    cout<<"Enter the positions you want to left shift"<<endl;
    cin>>d;
    shift(arr,n,d);
    return 0;
}
#include<iostream>
using namespace std;
int slidingsum(int *arr,int n,int k)
{
    int sum = INT32_MIN;
    int temp = 0;
    int j,x;
    for(int i=0;i<=n-k;i++)
    {
        
        j=i;
        x=k;
        while(x!=0)
        {
            temp += arr[j++];
            x--;
        }
        x=k;
        cout<<temp<<endl;
        if(temp > sum)
        {
            sum=temp;
        }
        temp=0;

    }
    return sum;
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
    int k;
    cout<<"Enter the value of sliding window"<<endl;
    cin>>k;
    int sum = slidingsum(arr,n,k);
    cout<<"The maximum sliding window sum is "<<sum;
    return 0;

}

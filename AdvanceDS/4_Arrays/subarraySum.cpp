#include<iostream>
using namespace std;
bool check(int *arr,int n,int sum)
{
    int rsum ;
    int j;
    for(int i=0;i<n;i++)
    {
        rsum = sum;
        j=i;
        while(rsum>0)
        {
            rsum -= arr[j++];
            if(rsum==0)
            return true;
        }
        
    }
    return false;
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
    int sum;
    cout<<"Enter the required sum you wanted"<<endl;
    cin>>sum;
    bool result = check(arr,n,sum);
    if(result)
    {
        cout<<"The subarray contains required sum"<<endl;
    }
    else{
        cout<<"The subarray does not contains required sum"<<endl;

    }
    return 0;
}
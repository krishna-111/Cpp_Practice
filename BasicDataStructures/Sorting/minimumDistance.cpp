#include<iostream>
#include<algorithm>
using namespace std;
int mindiff(int *arr,int n)
{
    sort(arr,arr+n);
    int min=INT32_MAX;
    int res;
    for(int i=0;i<n-1;i++)
    {
        res=arr[i+1]-arr[i];
        if(res<min)
        {
            min = res;
        }
    }
    return min;
}
int main()
{
    int n;
    cout<<"Enter the no. of elements of the array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min= mindiff(arr,n);
    cout<<"The minimum difference is "<<min<<endl;
    return 0;

}
#include<iostream>

using namespace std;
int maximum(int a,int b)
{
    return a>b?a:b;
}
int subarraysum(int *arr,int n)
{
    int res = arr[0];
    int sum=res;
    for(int i=1;i<n;i++)
    {
        res = maximum(arr[i],res+arr[i]);
        if(sum<res)
        {
            sum=res;
        }

    }
    return sum;

}


int main()
{
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int result = subarraysum(arr,size);
    
    cout<<"The result is "<<result;
    return 0;

}
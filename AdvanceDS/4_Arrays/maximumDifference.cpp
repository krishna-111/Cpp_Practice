#include<iostream>

using namespace std;
int maxdiff(int *arr,int n)
{
    int max=0,min=0,result=INT32_MIN;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[max])
        {
            max=i;
            if(result<arr[max]-arr[min]){
                result=arr[max]-arr[min];
                }
            

        }
        else if(arr[i]<arr[min])
        {
            if(result<arr[i]-arr[min])
            {
                result = arr[i]-arr[min];
            }
            min=i;
            max=i;

        }
        else{}
    }
    return result;

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
    int max = maxdiff(arr,size);
    cout<<"The maximum difference is "<<max<<endl;
    return 0;

}
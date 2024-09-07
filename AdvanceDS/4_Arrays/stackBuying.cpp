#include<iostream>

using namespace std;
int calprofit(int *arr,int n)
{
    int min=0,max=0,profit=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[max])
        {
            
            max=i;
            if(i==n-1)
            {
                profit+=arr[max]-arr[min];
            }
        }
        else if(arr[i]<arr[max]){
            profit += arr[max]-arr[min];
            min=i;
            max=i;
            
        }
        else{}
    }
    return profit;
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
    int profit = calprofit(arr,size);
    cout<<"The maximum profit is "<<profit<<endl;
    return 0;

}
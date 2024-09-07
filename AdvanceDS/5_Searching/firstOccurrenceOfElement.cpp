#include<iostream>
using namespace std;
int search(int *arr,int n,int k)
{
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        int mid = (i+j)/2;
        if(arr[mid]==k)
        {
            while(arr[mid]==arr[mid-1] && mid!=0)
            {
                mid = mid -1;
            }
            return mid;
        }
        else if(arr[mid]>k)
        {
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return -1;
    
}
int main()
{
    int n;

    cout<<"Enter the number of elements you want"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the element you want to search"<<endl;
    cin>>k;
    int res = search(arr,n,k);
    cout<<"The element present at "<<res<<"position"<<endl;
    return 0;


}
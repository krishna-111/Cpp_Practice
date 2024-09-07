#include<iostream>
using namespace std;
int search(int *arr,int n,int k)
{
    int i=0;
    int j=n-1;
    int count = 1;
    while(i<=j)
    {
        int mid = (i+j)/2;
        
        if(arr[mid]==k)
        {
            int l=mid;
            while(arr[l]==arr[l-1] && l!=0)
            {
                count++;
                l--;
            }
            l=mid;
            while(arr[l]==arr[l+1] && l!=n-1)
            {
                count++;
                l++;
            }
            return count;
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
    cout<<"The element occurred in "<<res<<" no. of times"<<endl;
    return 0;


}
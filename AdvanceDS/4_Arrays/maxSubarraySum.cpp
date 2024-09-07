#include<iostream>

using namespace std;
int maximum(int a,int b)
{
    return a>b?a:b;
}
int findmidsum(int *arr,int first,int mid,int last)
{
    int rsum=0,rightsum=INT32_MIN;
    int leftsum=INT32_MIN,lsum=0;
    for(int i=mid;i>=first;i--)
    {
        lsum+=arr[i];
        if(lsum>leftsum)
        {
            leftsum=lsum;
        }
    }
    for(int i=mid+1;i<=last;i++)
    {
        rsum+=arr[i];
        if(rsum>rightsum)
        {
            rightsum=rsum;
        }

    }
    return (leftsum+rightsum);

}
int subarraysum(int *arr,int first,int last)
{
    if(first==last)
    {
        return arr[first];
    }
    int mid = (first+last)/2;
    int leftsum = subarraysum(arr,first,mid);
    int rightsum = subarraysum(arr,mid+1,last);
    int midsum = findmidsum(arr,first,mid,last);
    return maximum((maximum(leftsum,rightsum)),midsum);

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
    int result = subarraysum(arr,0,size-1);
    
    cout<<"The result is "<<result;
    return 0;




}
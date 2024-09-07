#include<iostream>
using namespace std;

double findmedian(int *arr1,int *arr2,int m,int n)
{
   
    if(m>n)
    {
        return findmedian(arr2,arr1,n,m);
    }
    int low = 0;
    int high = m;
    int left = (m+n+1)/2;
    while(low<=high)
    {

        int l1=INT32_MIN;
        int l2=INT32_MIN;
        int r1=INT32_MAX;
        int r2=INT32_MAX;
        int mid1 = (low + high)/2;
        int mid2 = left-mid1;

        if(mid1<m){r1=arr1[mid1];}
        if(mid2<n){r2=arr2[mid2];}
        if(mid1-1>=0){l1=arr1[mid1-1];}
        if(mid2-1>=0){l2=arr2[mid2-1];}
        if(l1<=r2 && l2<=r1){
            if((m+n)%2!=0){return l1>l2?l1:l2;}
            return ((double)(max(l1,l2)+min(r1,r2)))/2.0;
        }
        else if(l1>r2)
        high = mid1-1;
        else
        low = mid1+1;


    }
    return 0;

}
int main()
{
    int m,n;

    cout<<"Enter the number of elements you want in array1"<<endl;
    cin>>m;
    int arr1[m];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the number of elements you want in array2"<<endl;
    cin>>n;
    int arr2[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    double median = findmedian(arr1,arr2,m,n);
    cout<<"The median is "<<median<<endl;
    return 0;


}
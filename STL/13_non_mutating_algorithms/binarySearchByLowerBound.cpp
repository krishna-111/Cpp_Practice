#include<iostream>
#include<algorithm>
using namespace std;
int* binarysearch(int *arr,int n,int element)
{
    int *it=lower_bound(arr,arr+n,element);
    if((it==arr+n) || (*it!=element))
    {
        return arr+n;
    }
    else{
        return it;
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements you want in array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int element;
    cout<<"Enter the element to be searched"<<endl;
    cin>>element;
    int* it = binarysearch(arr,n,element);
    if(it==arr+n)
    {
        cout<<"element is not found"<<endl;
        return 0;
    }
    cout<<"Element is found at "<<it-arr<<" position"<<endl;
    return 0;
}
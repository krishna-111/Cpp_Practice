#include<iostream>
#include<algorithm>
using namespace std;
int findrepetitions(int *arr,int n,int element)
{
    int *it1=lower_bound(arr,arr+n,element);
    if(it1==arr+n || (*it1)!=element)
    return 0;
    int *it2=upper_bound(arr,arr+n,element);
    return it2-it1;

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
    cout<<"Enter the element you want to find repeations"<<endl;
    cin>>element;
    int count=findrepetitions(arr,n,element);
    cout<<"The element is repeated in "<<count<<" no. of times"<<endl;
    return 0;
}
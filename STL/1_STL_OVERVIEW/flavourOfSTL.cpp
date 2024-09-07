#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no. of elements you want in your array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"The elemets of array after sorting are\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    if(binary_search(arr,arr+n,8))
    {
        cout<<"Element exists\n";
    }
    else{
        cout<<"Element doesn't exists\n";
    }
    return 0;
}
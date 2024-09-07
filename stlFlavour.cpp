#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,5,34,234,1,8};
    cout<<sizeof(arr)<<endl;
    sort(arr,arr+11);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<binary_search(arr,arr+11,500);
    cout<<endl;
    if(binary_search(arr,arr+11,10000))
    cout<<"Present";
    else
    cout<<"Absent";
    return 0;

}
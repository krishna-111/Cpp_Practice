#include<iostream>
#include<vector>
using namespace std;
vector<int> fun(int *arr,int n,int k)
{
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<k)
        v.push_back(arr[i]);
    }
    return v;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    vector<int> v=fun(arr,5,3);
    for(int x:v)
    cout<<x<<" ";
    return 0;
}
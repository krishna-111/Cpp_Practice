#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> v2 {1,2,3};
    for(int &x:v2){
    x=6;
    }
    for(int x:v2)
    cout<<x<<" ";
    cout<<endl;
    int arr[]={11,12,13,14};
    int n=sizeof(arr)/sizeof(int);
    vector<int> v3(arr,arr+n);
    for(auto it=v3.rbegin();it!=v3.rend();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
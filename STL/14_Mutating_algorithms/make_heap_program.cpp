#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v={10,5,23,456,27,48,8};
    for(auto &x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    make_heap(v.begin(),v.end(),greater<int>());
    for(auto &x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    pop_heap(v.begin(),v.end(),greater<int>());
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    v[6]=6;
    push_heap(v.begin(),v.end(),greater<int>());
    cout<<v.front()<<endl;
    for(auto &x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    sort_heap(v.begin(),v.end(),greater<int>());
    for(auto &x:v)
    {
        cout<<x<<" ";
    }




}
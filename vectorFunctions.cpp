#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v {10,20,30,40};
    v.pop_back();
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    v.front()=150;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    return 1;
}
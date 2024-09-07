#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v {1,2,3,4};
    v.resize(5);
    for(int x:v)
    cout<<x<<" ";
    cout<<endl;
    v.resize(9,100);
    for(int x:v)
    cout<<x<<" ";
    return 0;
}
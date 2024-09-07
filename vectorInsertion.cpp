#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v {1,2,3,4,5,6};
    auto it = v.insert(v.begin(),0);
    for(int x:v)
    cout<<x<<" ";
    cout<<endl;
    v.insert(v.begin()+2,3,300);
    for(int x:v)
    cout<<x<<" ";
   cout<<endl;
    vector<int> v2;
    v2.insert(v2.begin(),v.begin(),v.begin()+5);
    for(int x: v2)
    cout<<x<<" ";
    return 0;
}
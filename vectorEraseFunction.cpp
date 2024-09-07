#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v {1,2,3,4,5,6,7,8,9};
    v.erase(v.begin());
    for(auto x: v)
    cout<<x<<" ";
    cout<<endl;
    v.erase(v.begin(),v.begin()+3);
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    v.clear();
    cout<<v.size()<<endl;
    if(v.empty()==true)
    cout<<"Empty";
    else
    cout<<"Not empty";
    return 0;
}
#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40,50};
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    v.pop_back();
    for(int x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    //first way of inserting something into vector
    v.insert(v.begin(),100);
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    //second way of inserting something into vector
    v.insert(v.end(),2,200);
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int> v3;
    v3.insert(v3.begin(),v.begin(),v.end()-2);
    for(auto x:v3)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    //erase first way
    v.erase(v.begin());
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    //erase second way
    
    v.erase(v.begin(),v.end()-3);
    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    v.clear();
    if(v.empty())
    {
        cout<<"v vector is empty"<<endl;

    }
    v3.resize(3);
    for(auto x:v3)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    v3.resize(5);
    for(auto x:v3)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    v3.resize(8,100);
    for(auto x:v3)
    {
        cout<<x<<" ";
    }
    cout<<endl;

return 0;



}
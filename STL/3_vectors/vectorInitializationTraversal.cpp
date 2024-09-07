#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //first way
    vector<int> v1{10,15,20};
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    //second way
    vector<int> v2={10,15,20};
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2.at(i)<<" ";
    }
    cout<<endl;
    //Third way
    vector<int> v3;
    v3.push_back(10);
    v3.push_back(15);
    v3.push_back(20);
    for(auto it=v3.begin();it!=v3.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    //fourth way
    vector<int> v4(5);
    for(int i=0;i<5;i++)
    {
        v4[i]=i+2;
    }
    for(int i=0;i<5;i++)
    {
        cout<<v4[i]<<" ";
    }
    cout<<endl;
    //fifth way
    int number=3,x=10;
    vector<int> v5(number,x);
    for(int i=0;i<number;i++)
    {
        cout<<v5[i]<<" ";
    }
    cout<<endl;
    //sixth way
    int arr[]={10,15,20};
    vector<int> v6(arr,arr+3);
    for(auto it=v6.rbegin();it!=v6.rend();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;


}
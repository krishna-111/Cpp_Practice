#include<set>
#include<iostream>
using namespace std;
int main()
{
    set<int> s;
    s.insert(9);
    s.insert(67);
    s.insert(3);
    s.insert(-56);
    s.insert(10);
    s.insert(-56);
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    set<int,greater<int>> s2{-9,-9,-34,5,23,1,678};
    for(auto it=s2.begin();it!=s2.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    auto it2=s.find(3);
    for(auto it=it2;it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<s2.count(67)<<endl;
    s2.clear();
    cout<<s2.empty()<<endl;
    cout<<s.empty()<<endl;
    auto it=s.lower_bound(-56);
    cout<<*it<<endl;
    auto it3=s.lower_bound(4);
    cout<<*it3<<endl;
    auto it4=s.lower_bound(100);
    if(it4==s.end())
    {
        cout<<"True"<<endl;
    }
    auto it5=s.upper_bound(-56);
    cout<<*it5<<endl;
    auto it6=s.upper_bound(4);
    cout<<*it6<<endl;
    auto it7=s.upper_bound(100);
     if(it7==s.end())
    {
        cout<<"True"<<endl;
    }
    set<int> s3{10,20,30,40,50,60};
    s3.erase(10);
    for(auto it8=s3.begin();it8!=s3.end();it8++)
    {
        cout<<*it8<<endl;
    }
    s3.erase(s3.begin());
    for(auto it9=s3.begin();it9!=s3.end();it9++)
    {
        cout<<*it9<<endl;
    }
    s3.erase(s3.begin(),s3.end());
    if(s3.empty())
    {
        cout<<"It is empty"<<endl;
    }


}
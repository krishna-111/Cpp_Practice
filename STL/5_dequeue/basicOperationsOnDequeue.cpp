#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> de={10,20,30,40};
    de.push_back(50);
    de.push_front(5);
    for(auto i:de)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    de.pop_back();
    de.pop_front();
    for(auto i:de)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<de.size()<<endl;
    cout<<de.front()+1<<endl;
    cout<<de.back()<<endl;
    auto it=de.begin();
    cout<<*it<<endl;
    auto it2=de.end();
    cout<<*it2<<endl;
    de.insert(++it,{1,2,3});
    for(auto i:de)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}
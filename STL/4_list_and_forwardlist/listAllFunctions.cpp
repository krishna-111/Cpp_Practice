#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> li;
    li={10,20,30,40,50};
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    li.push_back(60);
    li.push_front(5);
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    li.pop_back();
    li.pop_front();
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    auto it=li.begin();
    auto it1=li.insert(it,5);
    cout<<*it1<<endl;
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    auto it2=li.insert(it1,2,7);
    cout<<*(++it2)<<endl;
    cout<<*(++it2)<<endl;
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<li.front()<<endl;
    cout<<li.back()<<endl;
    cout<<li.size()<<endl;

    auto it3=li.erase(it2);
    cout<<*it3<<endl;
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    li.remove(7);
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    list<int> li1={45,55,65,75,85};
    list<int> li2={46,56,66,76,86};
    li1.merge(li2);
    for(auto x:li1)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    
    return 0;
}
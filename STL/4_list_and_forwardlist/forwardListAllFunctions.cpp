#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> li={10,20,30,40,50};
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    li.push_front(5);
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    li.pop_front();
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    forward_list<int> li2;
    li2.assign({1,2,3});
    for(auto x:li2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    li.remove(10);
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    li2.assign(li.begin(),li.end());
    for(auto x:li2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    li2.assign(5,10);
    for(auto x:li2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    li2.remove(10);
    for(auto x:li2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    auto it=li.insert_after(li.begin(),15);
    cout<<*it<<endl;
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    auto it2=li.emplace_after(it,18);
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    auto it3=li.erase_after(it2);
    cout<<*it3<<endl;
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    li2.assign(5,6);
    for(auto x:li2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    li2.clear();
    if(li2.empty())
    {
        cout<<"NO list 2"<<endl;
    }
    li.reverse();
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    li.sort();
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    forward_list<int> li3={12,23,35,44};
    li.merge(li3);
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto x:li3)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    
}

#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(10);
    l.push_back(20);
    l.push_front(5);
    for(auto x:l)
    cout<<x<<" ";
    cout<<endl;
    list<int> l2={1,2,3,4,5,6};
    l2.pop_front();
    l2.pop_back();
    for(auto it=l2.begin();it!=l2.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    //insert(variations),front,back,size
    list<int> l3={1,2,3,4,5,6};
    auto it=l3.begin();
    it++;
    it=l3.insert(it,15);
    it=l3.insert(it,2,10);
    for(auto x:l3)
    cout<<x<<" ";
    cout<<endl;
    cout<<l3.front()<<" "<<l3.back()<<" "<<l3.size()<<endl;
    //erase(),remove()
    list<int> l4={10,20,30,10,10};
    auto it1=l4.begin();
    l4.erase(it1);
    l4.remove(10);
    for(auto x:l4)
    cout<<x<<" ";
    cout<<endl;
    //merge()
    list<int> l5={10,15,25};
    list<int> l6={5,10,20};
    l5.merge(l6);
    for(auto x:l5)
    cout<<x<<" ";
    cout<<endl;
    //unique(),sort(),reverse()
    list<int> l8={10,20,20,30,30,30,10,5,4};
    l8.unique();
    for(auto x:l8)
    cout<<x<<" ";
    cout<<endl;
    l8.reverse();
    for(auto x:l8)
    cout<<x<<" ";
    cout<<endl;
    list<int> l7={34,2,76,1,98,9};
    l7.sort();
    for(auto x:l7)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}
#include<iostream>
#include<forward_list>
using namespace std;
int main()
{
    forward_list<int> l={1,2,4};
    l.push_front(5);
    l.push_front(6);
    l.pop_front();
    for(int x:l)
    cout<<x<<" ";
    cout<<endl;
    forward_list<int> l2;
    l2.assign({10,20,30,40});
    for(forward_list<int>::iterator it=l2.begin();it!=l2.end();it++)
    {
        cout<<(*it)<<" ";
    }
    cout<<endl;
    forward_list<int> l3;
    l3.assign(l2.begin(),l2.end());
    for(forward_list<int>::iterator i=l3.begin();i!=l3.end();i++)
    {
        cout<<(*i)<<" ";
    }
    cout<<endl;
    forward_list<int> l4;
    l4.assign(5,69);
    for(forward_list<int>::iterator i=l4.begin();i!=l4.end();i++)
    {
        cout<<(*i)<<" ";
    }
    cout<<endl;
    //insert_after(),erase_after() functions
    forward_list<int> l5={1,2,3};
    l5.insert_after(l5.begin(),6);
    auto it1 = l5.insert_after(++l5.begin(),{7,8,9});
    l5.erase_after(it1,l5.end());
    for(forward_list<int>::iterator it=l5.begin();it!=l5.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
//clear(),empty(),merge(),sort(),reverse() functions
    forward_list<int> l6={11,2,43,784,51,6};
    forward_list<int> l7={56,23,69,4,7};
    if(l6.empty())
    cout<<"Empty";
    else
    cout<<"Not empty"<<endl;
    l6.sort();
    for(auto x:l6)
    cout<<x<<" ";
    cout<<endl;
    l7.sort();
    l6.merge(l7);
    for(auto x:l6)
    cout<<x<<" ";
    cout<<endl;
    if(l7.empty())
    cout<<"It is empty"<<endl;


    return 0;
}
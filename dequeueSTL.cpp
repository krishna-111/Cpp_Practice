#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d={10,20,30};
    d.push_back(40);
    d.push_front(5);
    for(auto x:d)
    cout<<x<<" ";
    cout<<endl;
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    //pop_front(),pop_back(),size(),begin(),end(),insert()
    deque<int>::iterator it=d.begin();
    it++;
    d.insert(it,1);
    cout<<d.size()<<endl;
    d.pop_back();
    d.pop_front();
    for(auto x:d)
    cout<<x<<" ";
    cout<<endl;
    


    return 0;
}
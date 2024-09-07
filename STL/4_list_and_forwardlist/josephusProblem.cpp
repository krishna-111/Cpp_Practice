#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> li;
    int persons;
    cout<<"Enter the number of persons you want "<<endl;
    cin>>persons;
    int k;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    for(int i=0;i<persons;i++)
    {
        li.push_back(i);
    }
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    auto it=li.begin();
    while(li.size()!=1)
    {
        for(int j=1;j<k;j++)
        {
            ++it;
            if(it==li.end())
            {
                it=li.begin();
            }
        }
        cout<<*it<<endl;
        it=li.erase(it);
        if(it==li.end())
        {
            it=li.begin();
        }
    }
    for(auto x:li)
    {
        cout<<x<<endl;
    }
    return 0;
}
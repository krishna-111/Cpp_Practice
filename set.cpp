#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int> s;
    s.insert(9);
    s.insert(5);
    s.insert(87);
    s.insert(9);
    for(set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}
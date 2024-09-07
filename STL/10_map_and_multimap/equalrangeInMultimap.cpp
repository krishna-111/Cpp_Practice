#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<int,int> mp;
    mp.insert({10,11});
    mp.insert({20,2});
    mp.insert({10,2});
    mp.insert({30,1});
    mp.insert({10,3});
    mp.insert({40,1});
    mp.insert({20,3});
    pair<multimap<int,int>::iterator,multimap<int,int>::iterator> it1=mp.equal_range(10);
    for(auto it3=it1.first;it3!=it1.second;it3++)
    {
        cout<<it3->first<<" "<<it3->second<<" ";
        cout<<endl;
    }

}
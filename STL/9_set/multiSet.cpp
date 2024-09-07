#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> ml;
    ml.insert(10);
    ml.insert(10);
    ml.insert(20);
    ml.insert(20);
    ml.insert(45);
    for(multiset<int>::iterator it=ml.begin();it!=ml.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<ml.size()<<endl;
    ml.erase(10);
    for(multiset<int>::iterator it1=ml.begin();it1!=ml.end();it1++)
    {
        cout<<*it1<<" ";
    }
    cout<<endl;
    auto it2=ml.lower_bound(20);
    cout<<*it2<<endl;
    auto it3=ml.upper_bound(50);
    if(it3==ml.end())
    {
        cout<<"End of the multiset";
    }
    cout<<endl;
}

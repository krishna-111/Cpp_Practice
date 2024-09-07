#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m.insert({14,"krishna"});
    m.insert({6,"bindu"});
    m.insert({29,"sahith"});
    m.insert({24,"pavan"});
    m.insert({53,"venky"});
    m.insert({41,"shiva"});
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<" ";
        cout<<endl;
    }
    map<int,string> m2;
    m2[1]="Abhishek";
    m2[2]="shankar";
    m2[5]="kiran";
    m2[10]="mahesh";
    m2[14]="Anwar";
    for(auto &x:m2)
    {
        cout<<x.first<<" "<<x.second<<" ";
        cout<<endl;
    }
    m2.erase(1);
    m2[2]="singam";
    for(auto &x:m2)
    {
        cout<<x.first<<" "<<x.second<<" ";
        cout<<endl;
    }
    cout<<m2.size()<<endl;
    m2.at(14)="ram";
    if(m2.find(23)==m2.end())
    {
        cout<<"NOt found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }
    size_t count=m2.count(14);
    cout<<count<<endl;
    auto it=m.lower_bound(6);
    cout<<(*it).second<<endl;
    auto it2=m.upper_bound(6);
    cout<<(*it2).second<<endl;


    return 0;
}
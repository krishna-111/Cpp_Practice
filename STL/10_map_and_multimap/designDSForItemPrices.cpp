#include<iostream>
#include<map>
using namespace std;
map<int,string> m;
void add(int price,string item)
{
    m.insert({price,item});
}
void printsorted()
{
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second;
        cout<<endl;
    }
}
void find(int price)
{
    auto it=m.find(price);
    if(it==m.end())
    {
        cout<<"NO such item is found"<<endl;
        return;
    }
    cout<<(*it).second<<endl;
}
void findgreater(int price)
{
    auto it=m.upper_bound(price);
    if(it==m.end())
    {
        cout<<"There are no such items"<<endl;
        return;
    }
    for(it;it!=m.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<" ";
        cout<<endl;
    }

}
void findsmaller(int price)
{
    auto it=m.lower_bound(price);
    if(it==m.begin())
    {
        cout<<"NO such items exists"<<endl;
        return;
    }
    for(auto it2=m.begin();it2!=it;it2++)
    {
        cout<<(*it2).first<<" "<<(*it2).second<<" ";
        cout<<endl;
    }

}
int main()
{
    add(40,"sugar");
    add(10,"salt");
    add(200,"dal");
    add(50,"rice");
    add(60,"fruits");
    printsorted();
    find(400);
    findgreater(41);
    findsmaller(100);


}
#include<iostream>
#include<set>
using namespace std;
set<int> s;
void insertelement(int n)
{
    s.insert(n);
}
void deleteelement(int x)
{
    s.erase(x);
}
bool findelement(int x)
{
    return s.count(x);

}
int getceil(int x)
{
    auto it=s.lower_bound(x);
    if(it==s.end())
    {
        return INT32_MAX;
    }
    return *it;
}
/*int getfloor(int x)
{
    if(s.count(x))
    {
        auto it=s.lower_bound(x);
        return *it;
    }
    else{
        for(auto it=s.begin();it!=s.end();it++)
        {
            if(x>*it && x<*(++it))
            {
                
                return *(--it);
            }
            it--;
        }
        return INT32_MIN;
    }

}Naive implementation which takes o(n) time*/
int getfloor(int x)
{
    auto it = s.lower_bound(x);
    if(it==s.begin())
    {
        return INT32_MIN;
    }
    if(it!=s.end() && *it==x)
    {
        return *it;
    }
    it--;
    return *it;
}
int main()
{
    int n;
    cout<<"Enter the number of elements you want to insert"<<endl;
    cin>>n;
    int x;
    cout<<"Enter the elements"<<endl;
    while(n!=0)
    {
        cin>>x;
        insertelement(x);
        n--;
    }
    deleteelement(10);
    bool res=findelement(20);
    if(res)
    {
        cout<<"Element is present"<<endl;

    }
    else{
        cout<<"Element is not present"<<endl;
    }
    int ceil1= getceil(40);
    cout<<"The element or greater element is "<<ceil1<<endl;
    int ceil2 = getceil(41);
    cout<<"The element or greater element is "<<ceil2<<endl;
    int floor1 = getfloor(50);
    cout<<"The element or lesser element is "<<floor1<<endl;
    int floor2 = getfloor(71);
    cout<<"The element or lesser element is "<<floor2<<endl;
    return 0;

}

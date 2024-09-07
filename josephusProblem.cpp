#include<iostream>
#include<list>
using namespace std;
int survivour(int n,int k)
{
    list<int> l;
    for(int i=1;i<=n;i++)
    {
        l.push_back(i);
    }
    list<int>::iterator it=l.begin();
    while(l.size()>1)
    {
        
        for(int i=1;i<k;i++)
        {
            it++;
            if(it==l.end())
            it=l.begin();
        }
        it=l.erase(it);
        if(it==l.end())
        it=l.begin();
    }
    return *it;
}
int main()
{
    int n;
    cout<<"Enter the number of participants"<<endl;
    cin>>n;
    int k;
    cout<<"Enter the person to be killed everytime"<<endl;
    cin>>k;
    int res=survivour(n,k);
    cout<<"The final survivour is "<<res;
    return 0;


}
#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<int,int> p1(10,20);
    pair<int,int> p4(4,50);
    pair<float,float>p2;
    p2={3.4,5.5};
    pair<int,string> p3(10,"krishna");
    cout<<p1.first<<endl;
    cout<<p2.second<<endl;
    cout<<p3.second<<endl;
    cout<<p4.second<<endl;
    
    cout<<((p1==p4))<<endl;
    cout<<(p1!=p4)<<endl;
    cout<<(p1<p4)<<endl;
    cout<<(p1>p4)<<endl;


    return 1;
}
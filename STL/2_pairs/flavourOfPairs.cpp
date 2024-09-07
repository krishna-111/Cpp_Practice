#include<iostream>
#include<utility>
using namespace std;
int main()
{
    pair<int,int> p1(10,20);
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;
    pair<int,string> p2;
    p2={24,"krishna"};
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;

    return 0;
}
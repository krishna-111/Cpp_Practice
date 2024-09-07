#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    auto a = 10;
    auto b = "krishna";
    auto c = 12.5;
    cout<<typeid(a).name()<<"\n";
    cout<<typeid(b).name()<<"\n";
    cout<<typeid(c).name()<<"\n";
}
#include<iostream>
using namespace std;
int count=0;
int fun()
{
    count++;
    cout<<"Krishna"<<endl;
    cout<<count;
    fun();
    return 1;
}
int main()
{
    fun();
    return 0;
}
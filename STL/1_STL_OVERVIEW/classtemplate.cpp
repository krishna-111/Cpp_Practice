#include<iostream>
using namespace std;
template <typename T>
class pair1{
    T x,y;
    public:
    pair1(T i,T j){x=i;y=j;}
    T getfirst(){return x;}
    T getsecond(){return y;}

};
int main()
{
    pair1<int> p1(10,20);
    cout<<p1.getfirst()<<endl;
    cout<<p1.getsecond()<<endl;
    pair1<char> p2('a','b');
    cout<<p2.getfirst()<<endl;
    cout<<p2.getsecond()<<endl;
    return 0;

}
#include<iostream>
using namespace std;
template <typename T>
struct pair1
{
    T x,y,z;
    pair1(T i,T j,T k)
    {
        x=i;
        y=j;
        z=k;
    }
    T getfirst(){return x;}
    T getsecond(){return y;}
    T getthird();
};
template <typename T>
T pair1<T>::getthird()
{
    return z;
}
int main()
{
    pair1<int> p1(1,2,3);
    cout<<p1.getfirst()<<endl;
    cout<<p1.getsecond()<<endl;
    cout<<p1.getthird();
    return 0;
}
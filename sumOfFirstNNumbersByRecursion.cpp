#include<iostream>
using namespace std;
int fun(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
    return n+fun(n-1);
    }
}
int main()
{
    int n;
    cout<<"Enter the number you want"<<endl;
    cin>>n;
    int result = fun(n);
    cout<<"The result is "<<result;
    return 0;
}
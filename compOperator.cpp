#include<iostream>

using namespace std;
int main()
{
    int a =10;
    int b=20;
    auto result = a<=>b;
    if(result<0)
    {
        cout<<"a value is more";
    }
    else if(result>0)
    {
        cout<<"b value is more";
    }
    else
    {
        cout<<"Both are same";
    }
    return 0;
}
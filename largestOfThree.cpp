#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the three numbers"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if (a==b)
    {
        if(b==c)
        {
            cout<<"all are equal";
            return 0;
        }
    }
    if(a>b && a>c)
    {
        cout<<"a is greater";
        
    }
    else if(b>c)
    {
        cout<<"b is greater";

    }
    else
    {
        cout<<"c is greater";
    }
    return 0;
}

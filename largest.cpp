#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int a,b,c;
    cout<<"Enter 3 numbers";
    cin>>a>>b>>c;
    if(a>=b)
    {
       if(a>b)
       {
       if(a>c)
       cout<<"a is greater";
       else if (a==c)
       cout<<"a and c are greater";
       else
       cout<<"c is greater";
       }
       else if(a==b)
       {
           if(a>c)
           cout<<"Both a and b are greater";
           else if (a == c)
           cout<<"all a,b,c are equal";
           else
           cout<<"c is greater";
       }
       
    }
    else if (b>=c)
    {
        if(b>c)
        cout<<"b is greater";
        else if(b==c)
        cout<<"both b and c are greater";
        else
        cout<<"c is greater";
        
    }
    else
    cout<<"c is greater";
    return 0;
}
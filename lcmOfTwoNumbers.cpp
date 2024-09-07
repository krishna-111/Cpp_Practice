#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any 2 numbers"<<endl;
    int a,b;
    cin>>a>>b;
    int result = max(a,b);
    int i=0;
    for(i=result;i<=(a*b);i++)
    {
        if(i%a == 0 && i%b == 0)
        break;
    }
    cout<<i;
    return 1;
}
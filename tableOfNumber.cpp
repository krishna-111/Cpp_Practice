#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter any 2 numbers"<<endl;
    cin>>a>>b;
    for(int i=1;i<=b;i++)
    {
        cout<<(a*i)<<" ";
    }
}
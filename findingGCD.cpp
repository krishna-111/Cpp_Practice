#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a<=b)
    {
        for(int i=a;i>=2;i--)
        {
            if(a%i==0 && b%i==0)
            {
                return i;
            }
            
        }
        return 1;
    }
    else
    {
        for(int i=b;i>=2;i--)
        {
            if(a%i==0 && b%i==0)
            {
                return i;
            }
            
        }
        return 1;

    }
}
int main()
{
    int n1,n2;
    cout<<"Enter any 2 numbers"<<endl;
    cin>>n1>>n2;
    int result = gcd(n1,n2);
    cout<<result;
}
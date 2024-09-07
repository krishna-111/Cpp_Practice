#include<iostream>
using namespace std;
bool isprime (int i)
{
    for(int k=2;k<=i/2;k++)
    {
        if(i%k==0)
        return false;
    }
    return true;
}
int check (int j)
{
    for(int k=2;k<=j;k++)
    {
        if(isprime(k))
        {
            if(j%k==0)
            {
                cout<<k<<" ";
                return k;
            }
        }
    }
}
int main()
{
    cout<<"Enter any number";
    int n;
    cin>>n;
    while(n!=1)
    {     
        int result = check(n);
        n=n/result; 
    }
}
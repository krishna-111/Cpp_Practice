#include<iostream>
using namespace std;
int isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;

}
void fun(int n)
{
    for(int i=2;i<=n;i++)
    {
        int a = isPrime(i);
        if(a==1)
        {
            if(n%i == 0)
            {
                cout<<i<<"\t";
                fun(n/i);
                break;
            }
        }
    }

}
int main()
{
    int n;
    cout<<"Enter the number"<<"\n";
    cin>>n;
    fun(n);
    return 1;

}
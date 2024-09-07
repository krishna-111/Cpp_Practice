#include<iostream>
using namespace std;
void isprime(int n)
{
    if(n==1)
    {
        cout<<"It is neither prime nor composite"<<endl;
        return;

    }
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            cout<<"No. is prime number"<<endl;
            return;
        }
    }
    cout<<"No. is not prime number"<<endl;
    return;
}
int main()
{
    int number;
    cout<<"Enter the number to be checked"<<endl;
    cin>>number;
    isprime(number);
    return 0;
}
#include<iostream>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        
        return 1;
    }
   
    return 0;
}
int main()
{
    int number;
    cout<<"Enter a number to be checked"<<endl;
    cin>>number;
    bool result = isprime(number);
    if(result)
    cout<<"It is not prime number"<<endl;
    else
    cout<<"It is  prime number";
}
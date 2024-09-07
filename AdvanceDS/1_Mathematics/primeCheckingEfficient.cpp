#include<iostream>
using namespace std;
bool isprime(int n)
{
    if(n==1)
    return false;
    if(n==2 || n==3)
    return true;
    if(n%2==0 || n%3==0)
    {
        return false;
    }
    else{
        for(int i=5;i*i<=n;i=i+6)
        {
            if(n%i==0 || n%(i+2)==0)
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{
    int number;
    cout<<"Enter the number you want to check"<<endl;
    cin>>number;
    bool res = isprime(number);
    if(res)
    {
        cout<<"The number is prime number"<<endl;

    }
    else{
        cout<<"The number is not prime number"<<endl;

    }
    return 0;

}
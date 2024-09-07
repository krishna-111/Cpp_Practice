// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
int isprime(int i)
{
    for(int j=2;j<=i/2;j++)
    {
        if(i%j==0)
        return 0;
    }
    return 1;
}
void check (int number)
    {
        for(int i=2;i<=number;i++)
        {
            if(isprime(i))
            {
                if(number%i==0)
                {
                    cout<<i<<" ";
                    number = number/i;
                   
                }
            }
        }
         if(number==1)
            return;
         else
            check(number);
    }
int main()
{
    int number;
    cout<<"Enter any number you want";
    cin>>number;
    check(number);
    return 0;
}
   
    
    

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
    cout<<"Enter the number you want to print prime factors"<<endl;
    cin>>number;
   
        int t=number;
        for(int i=2;i<=number && t!=1;)
        {
            if(isprime(i))
            {
                if(t%i==0)
                {
                    cout<<i<<" ";
                    t=t/i;
                }
                else{
                    i=i+1;
                }

            }
            else{
                i=i+1;
            }
        }
    

}
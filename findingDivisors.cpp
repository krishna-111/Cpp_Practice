#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the number for which you want to find the divisors"<<endl;
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        if(number%i==0)
        {
            cout<<i<<" ";
        }
    }
}
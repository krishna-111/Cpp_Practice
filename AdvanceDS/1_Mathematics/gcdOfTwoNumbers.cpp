#include<iostream>
using namespace std;
int findgcd(int a,int b)
{
    if(a%b==0)
    {
        return b;
    }
    else
    {
        return findgcd(b,a%b);
    }
}
int main()
{
    int number1;
    int number2;
    cout<<"Enter both the numbers"<<endl;
    cin>>number1;
    cin>>number2;
    int gcd = findgcd(number1,number2);
    cout<<"The gcd of given 2 numbers is "<<gcd<<endl;
    return 0;
}
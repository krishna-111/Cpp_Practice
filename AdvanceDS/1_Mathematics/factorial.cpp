#include<iostream>
using namespace std;
int factorial(int n)
{
    int res = 1;
    for(int i=1;i<=n;i++)
    {
        res = res *i;
    }
    return res;
}
int factorial2(int n)
{
    
    if(n<=1)
    return 1;
    else
    {
        return n*factorial2(n-1);
    }

}
int main()
{
    int number;
    cout<<"Enter the number you want"<<endl;
    cin>>number;
    int res = factorial(number);
    int res2 = factorial2(number);
    cout<<"The factorial of number is "<<res<<endl;
    cout<<"The factorial of number is "<<res2;
    return 0;
}
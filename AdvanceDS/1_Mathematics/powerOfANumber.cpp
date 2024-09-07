#include<iostream>
using namespace std;
int pow(int b1,int n)
{
    if(n==1)
    {
        return b1;
    }
    int b = pow(b1,n/2);
    int c=b*b;
    if(n%2==0)
    {
        return c;
    }
    else
    {
        return c*b1;
    }

}
int main()
{
    int base,power;
    cout<<"Enter the base"<<endl;
    cin>>base;
    cout<<"Enter the power"<<endl;
    cin>>power;
    int result = pow(base,power);
    cout<<"The result is "<<result<<endl;
    return 0;
}
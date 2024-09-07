#include<iostream>
using namespace std;
int pow(int base,int power)
{
    int res;
    int temp = base;
    for(int i=2;i<=power;i=i*2)
    {
        res = temp * temp;
        temp =res;
    }
    if(power%2==0)
    {
        return res;
    }
    else{
        return res*base;
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
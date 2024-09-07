#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int number;
    cout<<"Enter any binary number"<<endl;
    cin>>number;
    int i=0,actual=0;
    while(number!=0)
    {
        int temp = number % 10;
        actual = actual + temp * pow(2,i);
        i++;
        number/=10;
    }
    cout<<actual;
   
}
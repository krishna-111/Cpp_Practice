#include<iostream>
using namespace std;
bool isprime(int number)
{
    for(int j=2;j<=number/2;j++)
    {
        if(number%j==0)
        return 0;
    }
    return 1;
}
int main()
{
    int number;
    cout<<"Enter any prime number"<<endl;
    cin>>number;
    cout<<"The next prime number is"<<endl;
    int i = number+1;
    while(1)
    {
       bool result = isprime(i);
        if(result){
        cout<<i;
        break;
        }
        else{i=i+1;}
    }
}
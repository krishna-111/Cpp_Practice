#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter any number"<<endl;
    cin>>number;
    int result = 1;
    for(int i=2;i<=number;i++)
    {
        result = result * i;
    }
    cout<<result;
}
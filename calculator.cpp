#include<iostream>
using namespace std;
int main()
{
    int a,b,n,result;
    cout<<"Enter 2 numbers"<<endl;
    cin>>a>>b;
    cout<<"Enter your choice"<<"\n"<<"1:addition"<<"\n"<<"2.Substraction"<<"\n"<<"3.Multiplication"<<endl;
    cin>>n;
    switch(n)
    {
        case 1: result=a+b;
        break;
        case 2:result=a-b;
        break;
        case 3:result=a*b;
        break;
        default:
        cout<<"Invalid choice";
        break;
    }
    cout<<"The result is "<<result;

}
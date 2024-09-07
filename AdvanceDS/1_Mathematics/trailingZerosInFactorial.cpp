#include<iostream>
using namespace std;
int countzeros(int n)
{
    int temp=0;
    int temp2=n;
    while(temp2>=5)
    {
        temp = temp + (temp2/5);
        temp2 = temp2/5;
    }
    return temp;
}
int main()
{
    int number;
    cout<<"Enter the number you want"<<endl;
    cin>>number;
    int res = countzeros(number);
    cout<<"The factorial of given number contains "<<res<<" no. of zeros"<<endl;
    return 0;
}
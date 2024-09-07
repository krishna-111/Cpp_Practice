#include<iostream>
using namespace std;
int check(int n,int b)
{
    int temp=n;
    while(b!=1)
    {
        temp = temp/2;
        b--;
    }
    if(temp%2==0)
    return 0;
    else
    return 1;
}
int main()
{
    int number,bit;
    cout<<"Enter the number you want"<<endl;
    cin>>number;
    cout<<"Enter the bit where i need to check"<<endl;
    cin>>bit;
    int value = check(number,bit);
    cout<<"The required value at given position is  "<<value<<endl;
    return 0;

}
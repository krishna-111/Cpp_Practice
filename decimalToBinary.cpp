#include<iostream>
using namespace std;
void convert(int num)
{
    if(num == 0)
    return;
    else
    {
    if(num%2 == 0)
    {
        convert(num/2);
        cout<<"0";
    }
    else
    {
        convert(num/2);
        cout<<"1";
    }
    }
    return;
}
int main()
{
    int number;
    cout<<"Enter any decimal number"<<endl;
    cin>>number;
    convert(number);
    return 0;
}
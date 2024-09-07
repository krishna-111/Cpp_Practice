#include<iostream>
using namespace std;
int count(int number)
{
    int c=0;
    while(number>0)
    {
        c++;
        number=number/10;

    }
    return c;
}
int main()
{
    int number;
    cout<<"Enter the number you want"<<endl;
    cin>>number;
    int result = count(number);
    cout<<"The no. of digits are "<<result<<endl;
    return 0;

}
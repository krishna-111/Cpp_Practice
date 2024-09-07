#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year you want to check"<<endl;
    cin>>year;
    if(year % 4 == 0 && year % 100 != 0)
    cout<<"It is leap year";
    if(year%400 == 0)
    cout<<"It is leap year";
    else
    cout<<"NOn leap year";
    return 0;
}
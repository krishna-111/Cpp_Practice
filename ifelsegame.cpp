#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the munmber of cups"<<endl;
    cin>>n;
    if(n%2 != 0)
    cout<<"You won";
    else
    cout<<"Opponent won";
    return 0;
}
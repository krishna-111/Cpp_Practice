#include<iostream>
#include<cmath>
using namespace std;
bool check(int number)
{
    
    int temp =log2(number)+1;
    cout<<temp<<endl;
    int value = (1<<(temp-1));
    cout<<value<<endl;
    int final = number & value;
    cout<<final<<endl;
    if(number == final)
    return true;
    else
    return false;

}
int main()
{
    int number;
    cout<<"enter the number you want to check"<<endl;
    cin>>number;
    bool result = check(number);
    if(result)
    cout<<"yes";
    else
    cout<<"No";
    return 0;

}
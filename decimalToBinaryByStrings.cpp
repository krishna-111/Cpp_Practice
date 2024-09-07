#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the decimal number you wanted to convert"<<endl;
    cin>>n;
    string str="";
    while(n!=0)
    {
        str=str+to_string(n%2);
        n=n/2;
    }
    for(int i=str.length()-1;i>=0;i--)
    {
        cout<<str[i];
    }
}
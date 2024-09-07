#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string you want"<<endl;
    getline(cin,str);
    string str2;
    cout<<str2<<endl;
    for(auto i=str.end();i>=str.begin();i--)
    {
        str2 = str2+(*i);
    }
    cout<<str2;
    return 0;
}
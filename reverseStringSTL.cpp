#include<iostream>
#include<stack>
using namespace std;
void reverse1(string &str)
{
    stack<char> s;
    for(int i=0;i<str.length();i++)
    {
        s.push(str[i]);
    }
    /*string str2;
    str2.resize(s.size());*/
    int i=0;
    while(s.empty()==false)
    {
        str[i]=s.top();
        s.pop();
        i++;
    }
    cout<<str<<endl;
    

}
int main()
{
    cout<<"Enter the string you want to reverse"<<endl;
    string str;
    cout<<str.length()<<endl;
    cin>>str;
    reverse1(str);
    cout<<str;
    return 0;
}
#include<iostream>
#include<stack>
using namespace std;
/*bool balance (string str)
{
    stack<char> s;
    for(auto it=str.begin();it!=str.end();it++)
    {
        if(s.empty()==false)
        {
        if((s.top()=='('&& (*it)==')') || (s.top()=='{'&& (*it)=='}') || (s.top()=='[' && (*it)==']'))
        s.pop();
        else
        s.push((*it));
        }
        else
        s.push((*it));

    }
    if(s.empty())
    return true;
    else
    return false;
}*/
bool matching(char a,char b)
{
    return ((a=='{' && b=='}')||(a=='[' && b==']')||(a=='(')&& b==')');
}
bool eff_balance(string str)
{
    stack<char> s;
    cout<<s.empty()<<endl;
    cout<<str.length()<<endl;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='{' || str[i]=='[' || str[i]=='(')
        {
            s.push(str[i]);
        }
        else{
            if(s.empty())
            return false;
            else if(matching(s.top(),str[i])==false)
            return false;
            else
            s.pop();

        }
       
    }
     if(s.empty())
        return true;
    else
        return false;
}
int main()
{
    string str;
    cout<<"Enter the string"<<endl;
    cin>>str;
    cout<<str<<endl;
    bool res =eff_balance(str);
    if(res)
    cout<<"It has balanced paranthesis"<<endl;
    else
    cout<<"It does not have balanced paranthesis"<<endl;
    return 0;

}
#include<iostream>
#include<stack>
using namespace std;
bool checkbalance(string &str)
{
    stack<char> st;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='{' or str[i]=='[' or str[i]=='(')
        {
            st.push(str[i]);
        }
        else if(str[i]=='}')
        {
            if(st.empty()!=true && st.top()=='{'  )
            {
                st.pop();
            }
            else{
                return false;
            }
        }
        else if(str[i]==']')
        {
            if(st.empty()!=true && st.top()=='['  )
            {
                st.pop();
            }
            else{
                return false;
            }
        }
        else if(str[i]==')')
        {
            if(st.empty()!=true && st.top()=='('  )
            {
                st.pop();
            }
            else{
                return false;
            }
        }
        else{}
    }
    if(st.empty())
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    stack<int> st1;
    if(st1.empty())
    {
        cout<<"yes"<<endl;
    }
    
    else{
        cout<<"No";
    }
    
    string str;
    cout<<"Enter the string you want to check"<<endl;
    cin>>str;
    bool res=checkbalance(str);
    if(res)
    {
        cout<<"It is balanced"<<endl;
    }
    else{
        cout<<"It is not balanced";
    }
    return 0;
}
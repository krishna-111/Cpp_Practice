#include<iostream>
#include<stack>
using namespace std;
string reversestring(string &str1)
{
    stack<char> st;
    for(int i=0;i<str1.size();i++)
    {
        st.push(str1[i]);
    }
    int i=0;
    while(!st.empty())
    {
        str1[i]=st.top();
        st.pop();
        i++;
    }

}
int main()
{
    string str;
    cout<<"Enter the string you wanted to reverse"<<endl;
    cin>>str;
    reversestring(str);
    cout<<str;
    return 0;
}
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    while(st.empty()==false)
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
    
}
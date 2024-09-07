#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    while(s.empty()==false)
    {
        cout<<s.top()<<" "<<s.size();
        cout<<endl;
        s.pop();
        
    }
    cout<<endl;
    cout<<s.size();
    return 0;
}
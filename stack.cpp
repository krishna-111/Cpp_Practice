#include<iostream>
using namespace std;
struct node
{
    int top;
    int cap;
    int* array;
    node(int c)
    {
        cap=c;
        array=new int[c];
        top=-1;
    }
    void push(int x)
    {
        if(top==cap-1)
        {
            cout<<"overflow"<<endl;
            
        }
        else{
        top++;
        array[top]=x;}
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"underflow";
            return -1000000;
        }
        else{
        int y=array[top];
        top--;
        return y;}
    }
    int peek()
    {
        return array[top];
    }
    bool isempty()
    {
        return (top==-1);
    }
    int size()
    {
        return top+1;
    }
};
int main()
{
    node n(5);
    n.push(10);
    n.push(20);
    n.push(30);
    n.push(40);
    n.push(50);
    n.push(60);
    n.push(70);
    cout<<n.peek()<<endl;
    cout<<n.size()<<endl;
    n.pop();
    cout<<n.peek()<<endl;
    n.push(40);
    cout<<n.peek()<<endl;
    cout<<n.size()<<endl;
    cout<<n.isempty();
    return 1;
}
#include<iostream>
using namespace std;
struct node
{
    int data;
    node* next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
struct Mystack
{
    node* head;
    int size;
    Mystack(){
        head=NULL;
        size=0;
    }
    void push(int x)
    {
        node* temp=new node(x);
        temp->next=head;
        head=temp;
        size++;
    }
    int pop()
    {
        if(head==NULL)
        return INT8_MAX;
        
        int y=head->data;
        node* temp=head;
        head=head->next;
        delete(temp);
        size--;
    }
    int size1()
    {
        return size;
    }
    int peek()
    {
        if(head==NULL)
        return INT8_MAX;
        return head->data;
    }
    bool isempty()
    {
        return head==NULL;
    }
};
int main()
{
    Mystack m;
    m.push(10);
    m.push(20);
    m.push(30);
    
    cout<<m.peek()<<endl;
    cout<<m.size1()<<endl;
    m.pop();
    m.pop();
    cout<<m.peek()<<endl;
    cout<<m.size1()<<endl;
}
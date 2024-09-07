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
struct queue
{
    node* front;
    node* rear;
    int size;
    
    queue()
    {
        size=0;
        front=NULL;
        rear=NULL;
    }
    void enqueue(int x)
    {
        node* temp=new node(x);
        if(rear==NULL)
        {
            front=temp;
            rear=temp;
        }
        else{
            rear->next=temp;
            rear=temp;
        }
        size++;
    }
    void dequeue()
    {
        if(isempty())
        {
            cout<<"NOt possible"<<endl;
            return;
        }
        node* temp=front;
        front=front->next;
        delete(temp);
        size--;
        if(front==NULL)
        {
            rear=NULL;
        }
        
    }
    int getfront()
    {
        if(isempty())
        return;
        return front->data;
    }
    int getrear()
    {
        if(isempty())
        return;
        return rear->data;
    }
    bool isempty()
    {
        return front==NULL;
    }
};
int main()
{
    queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<q.size<<endl;
    cout<<q.getfront()<<endl;
    cout<<q.getrear()<<endl;
    q.dequeue();
    cout<<q.size<<endl;
    cout<<q.getfront()<<endl;
    cout<<q.getrear()<<endl;
    q.dequeue();
    q.dequeue();
    cout<<q.isempty()<<endl;
    q.dequeue();
}
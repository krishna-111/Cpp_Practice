#include<iostream>
using namespace std;
struct queue
{
    int* arr;
    int size;
    int front;
    int cap;
    queue(int n)
    {
        arr=new int[n];
        size=0;
        front=0;
        cap=n;
    }
    bool isempty()
    {
        return size==0;
    }
    bool isfull()
    {
        return size==cap;
    }
    int getfront()
    {
        if(isempty())
        return -1;
        return front;
    }
    int getrear()
    {
        if(isempty())
        return -1;
        return (front+(size-1))%cap;
    }
    void enqueue(int x)
    {
        if(isfull())
        return;
        int rear=getrear();
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
    }
    void dequeue()
    {
        if(isempty())
        return;
        front=(front+1)%cap;
        size--;
    }
};
int main()
{
    queue q(3);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    cout<<q.getfront()<<endl;
    cout<<q.getrear()<<endl;
    q.dequeue();
    q.dequeue();
    cout<<q.getfront()<<endl;
    cout<<q.getrear()<<endl;
    cout<<q.isempty()<<endl;
    q.enqueue(5);
    q.enqueue(6);
    cout<<q.isfull()<<endl;
    cout<<q.getfront()<<endl;
    cout<<q.getrear()<<endl;
}
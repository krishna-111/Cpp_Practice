#include<iostream>
using namespace std;
struct queue
{
    int front;
    int *arr;
    int size;
    int cap;
    queue(int n)
    {
        arr=new int[n];
        for(int i=0;i<n;i++)
        arr[i]=0;
        cap=n;
        size=0;
        front=0;
    }
    int rrear()
    {
        return (front+size-1)%cap;
    }
    int rfront()
    {
        return front;
    }
    bool isempty()
    {
        return size==0;
    }
    bool isfull()
    {
        return size==cap;
    }
    void enqueuef(int x)
    {
        if(isfull())
        {
            cout<<"Insertion not possible"<<endl;
            return;
        }
        front=(front-1+cap)%cap;
        arr[front]=x;
        size++;


    }
    void enqueuer(int x)
    {
        if(isfull())
        {
            cout<<"Not possible to insert"<<endl;
            return;
        }
        int rear=rrear();
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
        return;

    }
    void dequeuef()
    {
        if(isempty())
        {
            cout<<"Deletion is not possible"<<endl;
            return;
        }
        arr[front]=0;
        front=(front+1)%cap;
        size--;
    }
    void dequeuer()
    {
        if(isempty())
        {
            cout<<"Deletion is not possible"<<endl;
            return;
        }
        int rear=rrear();
        arr[rear]=0;
        size--;

    }
    int length()
    {
        return size;
    }
};
int main()
{
    queue q(5);
    q.enqueuef(1);
    for(int i=0;i<5;i++)
    cout<<q.arr[i]<<" ";
    cout<<endl;
    q.enqueuer(2);
    for(int i=0;i<5;i++)
    cout<<q.arr[i]<<" ";
    cout<<endl;
    q.enqueuer(3);
    for(int i=0;i<5;i++)
    cout<<q.arr[i]<<" ";
    cout<<endl;
    q.enqueuer(4);
    for(int i=0;i<5;i++)
    cout<<q.arr[i]<<" ";
    cout<<endl;
    cout<<q.length()<<endl;
    q.enqueuef(5);
    for(int i=0;i<5;i++)
    cout<<q.arr[i]<<" ";
    cout<<endl;
    q.enqueuef(6);
    q.enqueuer(7);
    q.dequeuef();
    for(int i=0;i<5;i++)
    cout<<q.arr[i]<<" ";
    cout<<endl;
    q.dequeuef();
    for(int i=0;i<5;i++)
    cout<<q.arr[i]<<" ";
    cout<<endl;
    q.dequeuer();
    for(int i=0;i<5;i++)
    cout<<q.arr[i]<<" ";
    cout<<endl;
    q.dequeuer();
    for(int i=0;i<5;i++)
    cout<<q.arr[i]<<" ";
    cout<<endl;
    q.dequeuer();
    for(int i=0;i<5;i++)
    cout<<q.arr[i]<<" ";
    cout<<endl;
    q.dequeuer();
    for(int i=0;i<5;i++)
    cout<<q.arr[i]<<" ";
    cout<<endl;




}
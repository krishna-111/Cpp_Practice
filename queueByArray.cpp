#include<iostream>
using namespace std;
struct queue
{
    int* array;
    int size;
    int front;
    int rear;
    int cap;
    queue(int n)
    {
        array=new int[n];
        cap=n;
        front=-1;
        rear=-1;
        size=0;

    }
    void enqueue(int x)
    {
        if(rear==-1)
        {
            front++;
            rear++;
            
            array[rear]=x;
            size++;
            return;
        }
        if((rear+1)%cap!=front)
        {
            rear=(rear+1)%cap;
           
            array[rear]=x;
            
            size++;
        }
        
        else{
            cout<<"Insertion is not possible"<<endl;
            return;
        }
    }
    int deque()
    {
        if(front==-1)
        {
            cout<<"nothing to delete"<<endl;
            return INT8_MAX;
        }
        if(front==rear)
        {
            int y=array[front];
            front=-1;
            rear=-1;
            size--;
            return y;
        }
        else{
            int y=array[front];
            front=(front+1)%cap;
            size--;
            return y;
        }

    }
    int length()
    {
        return size;
    }
    bool isempty()
    {
        return front==-1;
    }
    int getrear()
    {
        return array[rear];
    }
    int getfront()
    {
        return array[front];
    }
};
int main()
{
    queue q(2);
    q.enqueue(11);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(57);
    
    cout<<q.getrear()<<endl;
    cout<<q.getfront()<<endl;
    cout<<q.length()<<endl;
    cout<<q.isempty()<<endl;
    q.deque();
    q.deque();
    q.deque();
    cout<<q.length();
}
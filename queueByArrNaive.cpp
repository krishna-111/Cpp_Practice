#include<iostream>
using namespace std;
struct queue
{
    int* arr;
    int cap;
    int size;
    queue(int x)
    {
        arr=new int[x];
        cap=x;
        size=0;
    }
    bool isfull()
    {
        return size==cap;

    }
    bool isempty()
    {
        return size==0;
    }
    int getfront()
    {
        if(isempty())
        return -1;
        return arr[0];
    }
    int getrear()
    {
        if(isempty())
        return -1;
        return arr[size-1];

    }
    void enqueue(int x)
    {
        if(isfull())
        {
            cout<<"Insertion is not possible"<<endl;
            return;
        }
        else{
            arr[size]=x;
            size++;
        }

    }
    void dequeue()
    {
        if(isempty())
        {
            cout<<"Deletion is not possible"<<endl;
            return;
        }
        else{
            for(int i=0;i<size-1;i++)
            {
                arr[i]=arr[i+1];
            }
            size--;
        }

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
    cout<<q.isempty();
}
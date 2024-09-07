#include<iostream>
using namespace std;
struct node
{
int data;
node* next;
node* prev;
node(int x)
{
    data=x;
    next=NULL;
    prev=NULL;
}
};
node* insert(node* head,int element)
{
    node* temp=new node(element);
    if(head==NULL)
    return temp;
    temp->next=head;
    temp->prev=head->prev;
    head->prev=temp;
    temp->prev->next=temp;
    head=temp;

}
int main()
{
    node* head=new node(10);
    node* temp1=new node(20);
    node* temp2=new node(30);
    node* temp3=new node(40);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    temp2->next=temp3;
    temp3->prev=temp2;
    temp3->next=head;
    head->prev=temp3;
    cout<<"Enter the node you want to insert"<<endl;
    int element;
    cin>>element;
    head = insert(head,element);
    node* temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
    cout<<temp->data;
}


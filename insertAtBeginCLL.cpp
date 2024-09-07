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
node* insert (node* head,int n)
{

    node* temp1=new node(n);
    if(head==NULL)
    {
        temp1->next=temp1;
        return temp1;
    }
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=temp1;
    temp1->next=head;
    return temp1;
}
node* insert2 (node* head,int n)
{
    node* temp=new node(n);
    temp->next=head->next;
    head->next=temp;
    int m=temp->data;
    temp->data=head->data;
    head->data=m;
    return head;

}
int main()
{
    node* head=new node(10);
    node* temp1=new node(20);
    node* temp2=new node(30);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=head;
    cout<<"Enter the element you want to insert"<<endl;
    int n;
    cin>>n;
    head=insert(head,n);
     cout<<"Enter the secnd element you want to insert"<<endl;
    int n1;
    cin>>n1;
    head=insert(head,n1);

    cout<<"Linked list after insertion of new element is"<<endl;
    node* temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<temp->data;
    return 0;
}
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
node* insertatend (node* head,int element)
{
    node *end=new node(element);
    if(head==NULL)
    return end;
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=end;
    return head;
    

}
int main()
{
    node* head=NULL;
    head=insertatend(head,100);
    head=insertatend(head,10);
    head=insertatend(head,20);
    head=insertatend(head,30);
    head=insertatend(head,40);
    cout<<"The elements after insertion are"<<endl;
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 1;
}
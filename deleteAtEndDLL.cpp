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
node* deleteAtEnd(node* head)
{
    if(head == NULL)
    return NULL;
    if(head->next==NULL)
    {
    delete(head);
    return NULL;}
    node* temp=head;
    while(temp->next!=NULL)
    temp=temp->next;
    temp->prev->next=NULL;
    delete(temp);
    return head;

    


}
int main()
{
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->next=temp1;
    temp1->next=temp2;
    temp1->prev=head;
    temp2->prev=temp1;
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    head = deleteAtEnd(head);
    head = deleteAtEnd(head);
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
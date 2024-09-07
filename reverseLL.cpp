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
node* reverse(node* head)
{
    if(head==NULL)
    return NULL;
    
    node* temp1=NULL;
    node* temp2=NULL;
    while(head!=NULL)
    {
        temp2=temp1;
        temp1=head;
        head=head->next;
        temp1->next = temp2;
    }
    return temp1;
}
int main()
{
    node* head = new node(10);
   node* temp1=new node(20);
    node* temp2=new node(30);
    node* temp3=new node(40);
   head->next=temp1;
   temp1->next=temp2;
   temp2->next=temp3;
    head=reverse(head);
    cout<<"Linked list after reversal is "<<endl;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    return 1;
}
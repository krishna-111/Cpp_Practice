#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
node* deleteatend(node *head)
{
    if(head==NULL)
    return NULL;
    if(head->next==NULL){
    delete(head);
    return NULL;}
    node *temp1,*temp2;
    temp1=head->next;
    temp2=head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
        temp2=temp2->next;
    }
    temp2->next=NULL;
    delete(temp1);
    return head;
}
int main()
{
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->next=temp1;
    temp1->next=temp2;
    head=deleteatend(head);
    head=deleteatend(head);
    cout<<"The elements after deletion at the end are"<<endl;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    return 1;
}
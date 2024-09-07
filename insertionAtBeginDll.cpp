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
node* insertAtBegin(node* head,int ele)
{
    

    node* temp=new node(ele);
    if(head==NULL)
    return temp;
    temp->next=head;
    head->prev=temp;
    return temp;


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
    cout<<"Enter the element you want to insert"<<endl;
    int element;
    cin>>element;
    head = insertAtBegin(head,element);
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
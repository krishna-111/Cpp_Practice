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
node* insertatend(node* head,int element)
{
    node* last=new node(element);
    if(head==NULL)
    return last;
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=last;
    return head;

}
int main()
{
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->next=temp1;
    temp1->next=temp2;
    int element;
    cout<<"Enter the element to be inserted"<<endl;
    cin>>element;
    head=insertatend(head,element);
    cout<<"Elements after insertion are"<<endl;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;

    }
    return 1;
}
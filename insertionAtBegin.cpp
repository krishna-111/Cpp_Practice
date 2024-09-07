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
node* insert (node* head,int element)
{
    node *begin=new node(element);
    begin->next=head;
    head=begin;
    return head;
    

}
int main()
{
    node* head=NULL;
    head=insert(head,10);
    head=insert(head,20);
    head=insert(head,30);
    head=insert(head,40);
    cout<<"The elements after insertion are"<<endl;
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

    return 1;
}
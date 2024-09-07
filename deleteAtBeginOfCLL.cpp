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
node* deleteatbegin(node* head)
{
    node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;

    }
    node* temp1=head;
    temp->next=head->next;
    head=temp->next;
    delete temp1;
    return head;


}
node* deleteatbegin2(node* head)
{
    node* temp=head->next;
    int element=head->data;
    head->data=temp->data;
    temp->data=element;
    head->next=temp->next;
    delete(temp);
    return head;
}
int main()
{
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    node *temp3=new node(40);
    node *temp4=new node(50);
    node *temp5=new node(60);
    node *temp6=new node(70);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=temp5;
    temp5->next=temp6;
    temp6->next=head;
    
    
    head=deleteatbegin(head);
    head=deleteatbegin2(head);
    head=deleteatbegin2(head);
    cout<<"Elements after deletion are"<<endl;
    node* temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<temp->data<<" ";
    return 1;
}
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
node* deletek(node* head,int pos)
{
   node* temp=head;
   int k=1;
   while(temp->next!=head)
   {
    k++;
    temp=temp->next;
   } 
   if(pos>k)
   {
    cout<<"Deletion not possible"<<endl;
    exit(0);
   }
   if(pos==1)
   {
    node* temp=head->next;
    head->data=temp->data;
    head->next=temp->next;
    delete(temp);
    return head;
   }
   node* temp1=head;
   node* temp2=head;
   int n=1;
   while(n<pos)
   {
    n++;
    temp2=temp1;
    temp1=temp1->next;
   }
   temp2->next=temp1->next;
   delete temp1;
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
    cout<<"Enter the position you want to delete"<<endl;
    int pos;
    cin>>pos;
    
    head=deletek(head,pos);
    
   
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
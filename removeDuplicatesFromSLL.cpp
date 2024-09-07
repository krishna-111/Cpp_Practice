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
void remove(node* head)
{
    node* temp=head->next;
    if(head->data == temp->data)
    {
        
        head->next=temp->next;
        delete temp;
        if(head->next == NULL)
        return;
        remove(head);
    }
    else{
        remove(head->next);
    }
    
    
}
int main()
{
    node* head = new node(10);
   node* temp1=new node(10);
    node* temp2=new node(30);
    node* temp3=new node(30);
    node* temp4 = new node(50);
   node* temp5=new node(50);
    node* temp6=new node(60);
    node* temp7=new node(60);
   head->next=temp1;
   temp1->next=temp2;
   temp2->next=temp3;
   temp3->next=temp4;
   temp4->next=temp5;
   temp5->next=temp6;
   temp6->next=temp7;
   cout<<"HI"<<endl;
    remove(head);
    cout<<"Linked list after removal of duplicates is "<<endl;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    return 1;
}
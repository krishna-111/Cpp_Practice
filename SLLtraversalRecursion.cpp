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
void traverse(node* head)
{
    node* temp=head;
    if(temp==NULL)
    {
        return;
    }
    else{
        cout<<head->data<<" ";
        traverse(temp->next);
    }

}
int main()
{
    node* head=new node(10);
    node* temp1=new node(20);
    node* temp2=new node(30);
    node* temp3=new node(40);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    traverse(head);
    return 1;

}



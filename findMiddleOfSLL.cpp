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
int middle(node* head)
{
    if(head==NULL)
    return -1;
    node* temp1,*temp2;
    temp1=head;
    temp2=head;
    while(temp1!=NULL&&temp1->next!=NULL)
    {
        temp1=temp1->next->next;
        temp2=temp2->next;

    }
    return temp2->data;
}
int main()
{
    node* head=new node(10);
    node* temp1=new node(20);
    node* temp2=new node(30);
    node* temp3=new node(40);
    node* temp4=new node(50);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    int m = middle(head);
    cout<<"The required middle element is "<<m;
    return 1;

}
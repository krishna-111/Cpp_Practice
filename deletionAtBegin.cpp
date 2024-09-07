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
    if(head==NULL)
    return NULL;
    node *temp=head;
    head=head->next;
    delete temp;
    return head;

}
int main()
{
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->next=temp1;
    temp1->next=temp2;
    head=deleteatbegin(head);
    cout<<"The elements after deletion at the beginning are"<<endl;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    return 1;
}
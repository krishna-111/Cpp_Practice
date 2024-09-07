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
node* insert(node* head,int pos,int ele)
{
    node *inter = new node(ele);
    node *temp=head;
    int flag=0;
    while(temp!=NULL)
    {
        flag++;
        temp=temp->next;
    }
    if(pos>flag+1)
    return head;
    if(pos==1)
    {
        inter->next=head;
        head=inter;
        return head;
    }
    temp=head;
    node *temp1;
    while(pos!=1)
    {
        temp1=temp;
        temp=temp->next;
        pos--;
    }
    temp1->next=inter;
    inter->next=temp;
    return head;

}
int main()
{
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->next=temp1;
    temp1->next=temp2;
    cout<<"Enter the position you want element to be inserted"<<endl;
    int pos;
    cin>>pos;
    cout<<"Enter the element you want to insert"<<endl;
    int ele;
    cin>>ele;
    head = insert(head,pos,ele);
    cout<<"After insertion the elements are"<<endl;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
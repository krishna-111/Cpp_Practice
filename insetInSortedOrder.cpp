#include<iostream>
using namespace std;
struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;

    }
};
node* insert(node* head,int ele)
{
    node* inter=new node(ele);
    if(head=NULL)
    return inter;
    if(head->data>ele)
    {
        inter->next=head;
        head=inter;
        return head;
    }
    node* temp1=head;
    node* temp2;
    while(1)
    {
        if(ele>temp1->data)
        {
            temp2=temp1;
            temp1=temp1->next;
            if(temp1==NULL)
            {
                temp2->next=inter;
                return head;
            }
            
        }
        else{
            temp2->next=inter;
            inter->next=temp1;
            return head;
        }
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
    cout<<"Enter the element you want to insert"<<endl;
    int ele;
    cin>>ele;
    head = insert(head,ele);
    cout<<"Elements after insertion are"<<endl;
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
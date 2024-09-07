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
int search(node* head,int element)
{
   
    int pos=0;
    while(head!=NULL)
    {
        pos++;
        if(head->data==element)
        return pos;
        head=head->next;

    }
    return -1;


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
    cout<<"Enter the element to be searched"<<endl;
    int element;
    cin>>element;
    int pos=search(head,element);
    cout<<pos<<endl;
    if(pos==-1)
    cout<<"Element not found";
    else
    cout<<"Element found at"<<pos<<" positon";
    return 0;
}
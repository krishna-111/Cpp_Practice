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
    static int pos=1;
   
    if(head==NULL)
    return -1;
    if(head->data==element)
    return pos;
    else{
        pos++;
        search(head->next,element);
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
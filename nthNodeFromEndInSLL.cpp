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
int end(node* head,int pos)
{
    node* flag=head;
   /* int a=0;
    while(flag!=NULL)
    {
        a++;
        flag=flag->next;

    }
    if(pos>a)
    return -1;*/
    node* temp1,*temp2;
    temp1=head;
    temp2=head;
    while(pos!=0)
    {
        if(temp1==NULL)
        return -1;
        temp1=temp1->next;
        pos--;
    }
    while(temp1!=NULL)
    {
        temp1=temp1->next;
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
    node* temp5=new node(60);
    node* temp6=new node(70);
    node* temp7=new node(80);
    node* temp8=new node(90);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=temp5;
    temp5->next=temp6;
    temp6->next=temp7;
    temp7->next=temp8;
    cout<<"Enter which position you want from the end"<<endl;
    int pos;
    cin>>pos;
    int m = end(head,pos);
    if(m==-1){
    cout<<"Enter appropriate position";
    return 1;}
    cout<<"The required  element from the end is "<<m;
    return 1;

}
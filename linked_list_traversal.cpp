#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
void travese(node* head)
{
    node *t1=head;
    while(t1!=NULL)
    {
        cout<<t1->data<<"  ";
        t1=t1->next;


    }
}
int main()
{
  node* head = new node(10);
  node *temp1 = new node(20);
  node *temp2= new node(30);
  node *temp3= new node(40);
  head->next = temp1;
  temp1->next = temp2;
  temp2->next = temp3;
  temp3->next = NULL;
  
  travese(head);
  return 0;


}
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
bool findcycle(Node* head)
{
    if(head == NULL)
    return true;
    Node* first=head;
    Node* second=head;
    while(second->next!=NULL && second->next->next!=NULL)
    {
        first = first->next;
        second=second ->next->next;
        if(first==second)
        {
            return true;
        }

    }
    return false;
}
int main()
{
    Node *head = new Node(10);
   
    
    head->next =new Node(20);
   
    head->next->next = new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next = new Node(50);
     Node *temp = head->next->next->next->next;
    head->next->next->next->next->next = temp;
    bool res = findcycle(head);
    if(res)
    {
        cout<<"cycle exists"<<endl;
    }
    else{
        cout<<"Cycle doesn't exists";
    }
    return 0;

}
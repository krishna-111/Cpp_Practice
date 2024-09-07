#include<iostream>
using namespace std;
struct node
{
    int data;
    node* left;
    node* right;
    node(int x)
    {
        data=x;
        left=NULL;
        right=NULL;
    }
};
struct queue
{
    int* arr;
    int cap;
    int size;
    int front;
    queue(int x)
    {
        arr=new int[x];
        cap=x;
        size=-1;
        front=0;
    }
    void enqueue(int x)
    {
        size++;
        arr[size]=x;
    }
    void deque()
    {
        front++;
    }
};
void level(node* root,int n)
{
    queue q(n);
    q.enqueue(root->data);
    

}
int main()
{
    node* root=new node(10);
   root->left=new node(20);
    root->right=new node(30);
    root->left->left=new node(40);
    root->left->right=new node(50);
    root->right->left=new node(60);
    root->right->right=new node(70);
    root->left->left->left=new node(80);
    root->left->left->left->left=new node(90);
    root->left->left->left->left->right=new node(100);
    level(root,10);
    return 1;
}
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
int fheight(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL &&  root->right==NULL)
    {
        return 1;
    }
    int l=1+fheight(root->left);
    int r=1+fheight(root->right);
    return l>r?l:r;

}
void find(node* root,int dist)
{
    if(root==NULL)
    return;
    if(dist==0)
    {
        cout<<root->data<<" ";
        return;
    }
    find(root->left,dist-1);
    find(root->right,dist-1);

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
    int x=fheight(root);
    cout<<x<<endl;
    for(int i=0;i<x;i++)
    {
        find(root,i);
    }
    
    return 1;
}
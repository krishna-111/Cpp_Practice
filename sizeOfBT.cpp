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
int len(node* root)
{
    if(root==NULL)
    return 0;
    if(root->left==NULL && root->right==NULL)
    return 1;
    int l=len(root->left);
    int r=len(root->right);
    return 1+l+r;

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
    root->right->right->right=new node(80);
    int count=len(root);
    cout<<"The size of give binary tree is "<<count<<endl;
    return 0;
}
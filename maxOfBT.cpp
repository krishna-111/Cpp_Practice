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
int max1(int x,int y,int z)
{
    if(x>y)
    {
        if(x>z)
        {
            return x;
        }
        return z;
    }
    else if(y>z)
    {
        return y;
    }
    return z;
}
int findmax(node* root)
{
    static int max=-1000000;
    if(root==NULL)
    return max;
    if(root->left==NULL && root->right==NULL)
    {
        if((root->data)>max)
        max=root->data;
        return max;
    }
    int l=findmax(root->left);
    int r=findmax(root->right);
    return max1(l,r,root->data);
}
int main()
{
    node* root=new node(900);
    root->left=new node(10000);
    root->right=new node(20);
    root->left->left=new node(500000);
    root->right->right=new node(100);
    root->left->left->right=new node(923);
    root->right->right->left=new node(897);
    int max=findmax(root);
    cout<<"The maximum value is "<<max;
    return 0;
}
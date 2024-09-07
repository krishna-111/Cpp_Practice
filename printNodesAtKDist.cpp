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
void find(node* root,int dist)
{
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
    cout<<"Enter the distance you wanat"<<endl;
    int dist;
    cin>>dist;
    find(root,dist);
    return 1;
}
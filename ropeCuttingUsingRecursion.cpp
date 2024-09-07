#include<iostream>
using namespace std;

int max(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        return a;
        else
        return c;
    }
    else if(b>c)
    return b;
    else
    return c;

}
int check(int len,int a,int b,int c)
{
    int count=0;
    if(len<0)
    {
        return -1;
    }
    if(len==0)
    {
        return count++;

    }
    int x,y,z;
    x=check(len-a,a,b,c);
    y=check(len-b,a,b,c);
    z=check(len-c,a,b,c);
    if(x!=-1)x++;
    if(y!=-1)y++;
    if(z!=-1)z++;
    return max(x,y,z);

}

int main()
{
    int len,a,b,c;
    cout<<"Enter the length of the rope"<<endl;
    cin>>len;
    cout<<"Enter the 3 parameters you want"<<endl;
    cin>>a>>b>>c;
    
    int result = check(len,a,b,c);
    
    
   
        cout<<result;
   
    return 0;
}
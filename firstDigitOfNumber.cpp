#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter any number"<<endl;
    cin>>n;
    /*int i=n,j=0;
    while(i!=0)
    {
        j++;
        i=i/10;
    }
    for(int k=1;k<j;k++)
    {
        n=n/10;
    }*/
    while(n>10)
    {
        n=n/10;
    }
    cout<<n;
}


#include<iostream>
using namespace std;
int findclosest(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return i;
        }
    }
    return n;
}
int main()
{
    int number;
    cout<<"Enter the number you want to print prime factors"<<endl;
    cin>>number;
    int temp=number;
    while(temp!=1)
    {
        int res = findclosest(temp);
        cout<<res<<" ";
        temp  = temp/res;

    }
}
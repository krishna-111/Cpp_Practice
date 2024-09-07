#include<iostream>
#include<vector>
using namespace std;
void seiveof(int n)
{
    vector<bool> v(n+1,true);
    for(int i=2;i*i<=n;i++)
    {
        if(v[i])
        {
            for(int j=i*i;j<=n;j=j+i)
            {
                v[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(v[i])
        {
            cout<<i<<" ";
        }
    }

}
int main()
{
    int number;
    cout<<"Enter the number you want"<<endl;
    cin>>number;
    seiveof(number);
    return 0;
}
#include<iostream>
#include<vector>
using namespace std;
bool isprime(int n)
{
    if(n==1)
    return false;
    if(n==2 || n==3)
    return true;
    if(n%2==0 || n%3==0)
    {
        return false;
    }
    else{
        for(int i=5;i*i<=n;i=i+6)
        {
            if(n%i==0 || n%(i+2)==0)
            {
                return false;
            }
        }
        return true;
    }
}
int main()
{
    int number;
    cout<<"Enter the number you want"<<endl;
    cin>>number;
    bool res = isprime(number);
    if(res)
    {
        cout<<"The divisors of number are"<<endl;
        cout<<"1"<<" "<<number<<endl;
    }
    else{
        vector<pair<int,int>> v;
        v.push_back({1,number});
        for(int i=2;i*i<=number;i++)
        {
            if(number%i==0)
            {
                v.push_back({i,number/i});
            }
        }
        cout<<"The divisors of the number are"<<endl;
        for(auto it=v.begin();it!=v.end();it++)
        {
            cout<<it->first<<" ";
        }
        for(auto it=v.rbegin();it!=v.rend();it++)
        {
            if(it->first==it->second)
            {
                continue;
            }
            cout<<it->second<<" ";
        }
    }

}
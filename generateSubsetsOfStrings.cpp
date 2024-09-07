#include<iostream>
#include<numeric>
using namespace std;
int m;
int factorial(int n)
{
    if(n==0)
    return 1;
    else
    return n*factorial(n-1);

}
int combination(int m,int j)
{
    return factorial(m)/(factorial(m-j)*factorial(j))
}
int generate(string &str,int j)
{
    if(j==0)
    {
        cout<<" "<<endl;
        return 1;
    }
    int k=combination(m,j);
    for(int i=0;i<k;i++)
    {

    }
    generate(str,j-1);
    
}
int main()
{
    
    string str;
    cout<<"Enter the string you want"<<endl;
    cin>>str;
    m=str.length();
    generate(str,m);
    return 0;
}
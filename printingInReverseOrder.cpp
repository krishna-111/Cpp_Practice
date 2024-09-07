#include<iostream>
using namespace std;
int fun(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        cout<<n<<" ";
        fun(n-1);
        
    }
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the number you want"<<endl;
    cin>>n;
    fun(n);
    return 0;
}
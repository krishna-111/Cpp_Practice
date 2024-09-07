#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
int sub(int a,int b)
{
    return b-a;
}
int main()
{
    vector<int> v={10,20,30,40,60};
    int res=100;
    cout<<accumulate(v.begin(),v.end(),res,sub)<<endl;
    cout<<res;
    return 0;

}

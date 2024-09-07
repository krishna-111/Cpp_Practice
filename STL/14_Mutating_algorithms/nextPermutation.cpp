#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1={50,40,30,20,10};
    
    bool res = next_permutation(v1.begin(),v1.end());
    for(int &x:v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    if(res)
    {
        cout<<"yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
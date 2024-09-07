#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40,50,60,70};
    rotate(v.begin(),v.end()-1,v.end());
    for(auto &x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}
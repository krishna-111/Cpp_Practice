#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1={10,20,30,40,50};
    vector<int> v2={15,25,35,45,55};
    vector<int> v3(10);
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
    for(int &x:v3)
    {
        cout<<x<<" ";
    }
    return 0;
}
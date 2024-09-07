#include<iostream>
#include<vector>
using namespace std;
void myfun(vector<int> &v2)
{
    v2.insert(v2.begin(),5);
    v2.pop_back();
}
int main()
{
    vector<int> v={10,20,30,40,50};
    myfun(v);
    for(const int &v1:v)
    {
        cout<<v1<<" ";
    }
    cout<<endl;
    return 0;
}
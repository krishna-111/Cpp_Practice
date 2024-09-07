#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={10,20,30,40,50,60,70};
    vector<int>::iterator i=v.begin();
    cout<<*i<<endl;
    advance(i,3);
    cout<<*i<<endl;
    advance(i,-1);
    cout<<*i<<endl;
    return 0;
}
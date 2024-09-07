#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
void fun(int arr[],int n)
{
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    v.push_back({arr[i],i});
    sort(v.begin(),v.end());
    for(pair<int,int> x:v){
    cout<<x.first<<" "<<x.second;
    cout<<endl;
    }

}
int main()
{
    int arr[]={66,45,33,675,1};
    fun(arr,5);
    return 1;

}
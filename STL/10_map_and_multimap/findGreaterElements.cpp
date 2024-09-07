#include<iostream>
#include<map>
using namespace std;
void findgreater(int *arr,int n)
{
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]=0;
    }
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<" ";
        cout<<endl;
    }
    for(int j=0;j<n;j++)
    {
        
        auto it2=m.find(arr[j]);
        if(it2->second!=0)
        {
            continue;
        }
        auto it4=it2;
        for(auto it3=++it4;it3!=m.end();it3++)
        {
            (it2->second)++;
        }
    }
    for(auto it4=m.begin();it4!=m.end();it4++)
    {
        cout<<it4->first<<" "<<it4->second<<" ";
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the no. of array elements you want"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    findgreater(arr,n);
    return 0;
}
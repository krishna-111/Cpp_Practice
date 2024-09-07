#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool mycmp(pair<int,int> p1,pair<int,int> p2)
{
    return p1.second>p2.second;
}
void sortbyfrequency(int *arr,int n)
{
    sort(arr,arr+n);
    vector<pair<int,int>> v;
    v.push_back({arr[0],1});
    int count=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i]!=arr[i-1])
        {
            v.push_back({arr[i],1});
            continue;
        }
        else{
            v.back().second++;
        }


    }
    for(auto &p:v)
    {
        cout<<p.first<<" "<<p.second<<" ";
        cout<<endl;
    }
    sort(v.begin(),v.end(),mycmp);
    for(auto &p:v)
    {
        cout<<p.first<<" "<<p.second<<" ";
        cout<<endl;
    }
    for(auto it=v.begin();it!=v.end();it++)
    {
        int temp=it->second;
        while(temp!=0)
        {
            cout<<it->first<<" ";
            temp--;
        }
    }
}
int main()
{
    int numbers;
    cout<<"Enter the number of elements you want"<<endl;
    cin>>numbers;
    int arr[numbers];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<numbers;i++)
    {
        cin>>arr[i];
    }
    sortbyfrequency(arr,numbers);
    return 0;
}
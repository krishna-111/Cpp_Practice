#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
bool mycmp(pair<int,int> p1,pair<int,int> p2)
{
    return p1.first>p2.first;
}
int knapsack(int *warr,int *parr,int n,int k)
{
    
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
       v.insert(v.begin()+i,{(parr[i]/warr[i]),warr[i]});
    }
    sort(v.begin(),v.end(),mycmp);
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;

    }
    int profit=0;
    for(int i=0;i<n;i++)
    {
        k=k-v[i].second;
        if(k>=0)
        {

            profit += (v[i].first * v[i].second);
        }
        else{
            k=k+v[i].second;
            profit += k*v[i].first/v[i].second;
            break;
        }

    }
    return profit;
    

    

}
int main()
{
    cout<<"Enter the no. of elements you want"<<endl;
    int number;
    cin>>number;
    cout<<"Enter the elements of the weight array"<<endl;
    int warr[number];
    for(int i=0;i<number;i++)
    {
        cin>>warr[i];

    }
    int parr[number];
    cout<<"Enter the elements of profit array"<<endl;
    for(int i=0;i<number;i++)
    {
        cin>>parr[i];
    }

    int k;
    cout<<"Enter weight of knapsack"<<endl;
    cin>>k;
    int value = knapsack(warr,parr,number,k);
    cout<<"The maximum profit thief can get is "<<value<<endl;

    return 0;
}
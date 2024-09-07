#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of pairs you wanted"<<endl;
    cin>>n;
    pair<int,char> p[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter the "<<(i+1)<<" th element of pair"<<endl;
        cin>>p[i].first;
        cin>>p[i].second;
    }
   
        cout<<"The elements of pair are"<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<p[i].first<<" "<<p[i].second<<endl;
        }
    sort(p,p+n);
    cout<<"The sorted elements are"<<endl;
    for(int i=0;i<n;i++)
        {
            cout<<p[i].first<<" "<<p[i].second<<endl;
        }
        return 0;


}
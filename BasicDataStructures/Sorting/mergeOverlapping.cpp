#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void overlap(pair<int,int> *arr,int n)
{
    vector<pair<int,int>> v;
    sort(arr,arr+n);
    int i=0;
    int j=i;
    int max=arr[j].second;
    for(i=1;i<n;i++)
    {
        if(max>=arr[i].first )
        {
            if(arr[i].second>max){
                max=arr[i].second;
            }
            if(i==n-1)
            {
                v.push_back({arr[j].first,max});
            }
            
            continue;

        }
        else{
            v.push_back({arr[j].first,max});
            j=i;
            max=arr[j].second;
            if(i==n-1)
            {
                v.push_back({arr[i].first,arr[i].second});
            }
        }

    }
    for(auto it=v.begin();it!=v.end();it++)
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter the no. of pairs you want"<<endl;
    cin>>n;
    pair<int,int> arr[n];
    
    for(int i=0;i<n;i++)
    {
        cout<<"enter the elements of pair"<<(i+1)<<endl;
        cin>>arr[i].first;
        cin>>arr[i].second;
    }
    overlap(arr,n);

}
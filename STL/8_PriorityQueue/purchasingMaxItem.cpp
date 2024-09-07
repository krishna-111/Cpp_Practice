#include<iostream>
#include<queue>
using namespace std;
int findmaxitems(int *arr,int n,int k)
{
    priority_queue<int,vector<int>,greater<int>> pq(arr,arr+n);
    int count=0;
    while(k>=0)
    {
        if(pq.empty())
        {
            return count;
        }
        k=k-pq.top();
        if(k<0)
        {
            return count;

        }
        else{
            count++;
            pq.pop();
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the number of items you want"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the costs of items in array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the maximum sum you want"<<endl;
    cin>>k;
    int max = findmaxitems(arr,n,k);
    cout<<"We can buy maximum of "<<max<<" items"<<endl;
    
    return 0;
}

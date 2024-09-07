#include<iostream>
#include<deque>
using namespace std;
int findmax(deque<int> de)
{
    int max=de.front();
    for(auto it=de.begin();it!=de.end();it++)
    {
        if(max<*it)
        {
            max=*it;
        }
        

    }
    return max;
}
void subarrayMax(int *arr,int n,int k)
{
    int subparts=n-k+1;
    deque<int> q;
    int *ptr=arr;
    deque<int> q1;
    while(subparts!=0)
    {
        
        q.insert(q.begin(),ptr,ptr+k);
        int max=findmax(q);
        
        q1.push_back(max);
        q.clear();
        ptr++;
        subparts--;
    }
    for(int x:q1)
    {
        cout<<x<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array you want"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the subarray size"<<endl;
    int sub;
    cin>>sub;
    subarrayMax(arr,n,sub);
    return 0;
}
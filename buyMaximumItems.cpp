//STL - priority queue - L4
#include<iostream>
#include<queue>
using namespace std;
int findmax(int *arr,int n,int sum)
{
    priority_queue<int,vector<int>,greater<int>> pq(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    int count=0;
    while(sum>=0)
    {
        if(sum-pq.top()<0 || pq.empty()==true)
        return count;
        sum=sum-pq.top();
        count++;
        pq.pop();
    }

    
    

}
int main()
{
    cout<<"Enter the no of items you want"<<endl;
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the costs of the items"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum you wanted"<<endl;
    int sum;
    cin>>sum;
    int result = findmax(arr,n,sum);
    cout<<"You can buy "<<result<<" items";
    return 1;
}
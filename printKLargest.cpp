#include<iostream>
#include<queue>
using namespace std;
void printmax(int arr[],int n,int k)
{
    priority_queue<int> pq(arr,arr+n);
    while(k!=0)
    {
        cout<<pq.top()<<" ";
        pq.pop();
        k--;
    }
}

int main()
{
    int arr[]={10,20,30,40,50};
    int k;
    cout<<"Enter the no. of elements you wanted to be printed"<<endl;
    cin>>k;
    printmax(arr,5,k);
}
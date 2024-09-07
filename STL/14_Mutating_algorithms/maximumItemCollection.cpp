#include<iostream>
#include<algorithm>

using namespace std;
int pickmax(int *arr,int number,int k)
{
    sort(arr,arr+number,greater<int>());
    for(int i=0;i<number;i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    int profit=0;
    for(int i=0;i<k;i++)
    {
        profit+=arr[i];
    }
    return profit;
    
}
int main()
{
    cout<<"Enter the no. of elements you want"<<endl;
    int number;
    cin>>number;
    cout<<"Enter the elements of the array"<<endl;
    int arr[number];
    for(int i=0;i<number;i++)
    {
        cin>>arr[i];

    }
    int k;
    cout<<"Enter maximum number of items you want to be picked by thief"<<endl;
    cin>>k;
    int value = pickmax(arr,number,k);
    cout<<"The maximum profit thief can get is "<<value<<endl;

    return 0;
}
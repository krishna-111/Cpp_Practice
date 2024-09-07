#include<iostream>
#include<vector>
using namespace std;
vector<int> findnumbers(int *arr,int n,int k)
{
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<k)
        {
            v.push_back(arr[i]);
        }
    }
    return v;
    
}
int main()
{
    int n;
    cout<<"enter the number of elements you want\n";
    cin>>n;
    cout<<"Enter the elements into the array\n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number you want so all the numbers smaller than that are returned\n";
    int k;
    cin>>k;
    vector<int> v;
    v=findnumbers(arr,n,k);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
        
    }

}
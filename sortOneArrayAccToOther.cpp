#include<iostream>
#include<utility>
#include<algorithm>
using namespace std;
void sortpair(int arr[],char arr2[],int n)
{
    pair<int,char> p1[n];
    for(int i=0;i<n;i++)
    {
        p1[i]={arr[i],arr2[i]};
    }
    sort(p1,p1+n);
    for(int i=0;i<n;i++)
    {
        cout<<p1[i].second<<" ";
    }



}
int main()
{
    int arr[]={1,222,33,4};
    char arr2[]={'z','y','x','w'};
    int n=sizeof(arr)/sizeof(arr[0]);
    sortpair(arr,arr2,n);
    return 0;
}

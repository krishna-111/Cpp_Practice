#include<iostream>
#include<map>
using namespace std;
void printgreater(int *arr,int number)
{
    map<int,int> m;
    for(int i=0;i<number;i++)
    {
        m[arr[i]]=m[arr[i]]+1;
    }
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<" ";
        cout<<endl;
    }
    int count=0;
    int temp;

    for(auto it=m.rbegin();it!=m.rend();it++)
    {
        temp=it->second;
        it->second=count;
        count+=temp;
    }
    /*for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<" ";
        cout<<endl;
    }*/
    for(int i=0;i<number;i++)
    {
        cout<<m[arr[i]]<<" ";
    }


}
int main()
{
    int number;
    cout<<"Enter the number of elements you want"<<endl;
    cin>>number;
    int arr[number];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<number;i++)
    {
        cin>>arr[i];
    }
    printgreater(arr,number);
    return 0;
}
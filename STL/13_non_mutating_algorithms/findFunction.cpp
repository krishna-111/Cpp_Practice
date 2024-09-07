#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={5,10,15,20,25,30,35,40};
    auto it = find(v.begin(),v.end(),40);
    if(it==v.end())
    {
        cout<<"Element is not found"<<endl;
    }
    else{
        cout<<"The element is found at "<<it-v.begin()<<" position"<<endl;
    }
    int arr[]={5,10,15,20,25,30,35};
    auto it2=find(arr,arr+7,35);
    if(it2==arr+7)
    {
        cout<<"Element is not found"<<endl;
    }
    else{
        cout<<"Element is found at "<<it2-arr<<" position"<<endl;
    }
    return 0;
}
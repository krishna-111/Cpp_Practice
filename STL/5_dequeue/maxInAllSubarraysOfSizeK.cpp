#include<iostream>
#include<deque>
using namespace std;
void subarrayMax(int *arr,int n,int sub)
{
    int k=n-sub+1;
    deque<int> de;
    int *ptr=arr;
    while(k!=0)
    {
        for(auto it=ptr;it!=ptr+sub;ptr++)
        {
            if(de.empty())
            {
            de.push_front(*ptr);
            }
            if(*ptr>de.front())
            {
                de.clear();
                de.push_front(*ptr);
            }
            if(*ptr<de.front())
            {
                
            }

        }
        


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

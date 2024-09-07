#include<iostream>
using namespace std;
bool check(int *arr,int n,int sum)
{
    int i=0;
    int result = sum;
    while(result>0)
    {
        result -= arr[i++];
    }
    if(result == 0)
    return true;
    for(int j=1;j<n;j++)
    {
        result = result - arr[j-1];
        if(result==0)
        return true;
        else{
            while(result>0)
            {
                result-=arr[i++];
            }
            
        }
    }

}
int main()
{
    int n;
    cout<<"Enter the no. of elements of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum;
    cout<<"Enter the required sum you wanted"<<endl;
    cin>>sum;
    bool result = check(arr,n,sum);
    if(result)
    {
        cout<<"The subarray contains required sum"<<endl;
    }
    else{
        cout<<"The subarray does not contains required sum"<<endl;

    }
    return 0;
}
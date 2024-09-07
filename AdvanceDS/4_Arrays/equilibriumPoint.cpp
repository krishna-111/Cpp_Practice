#include<iostream>
using namespace std;
bool equilibrium(int *arr,int n)
{
    int lsum=0,rsum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            lsum+=arr[j];

        }
        
        for(int k=i+1;k<n;k++)
        {
            rsum+=arr[k];
        }
        
        if(lsum==rsum)
        {
            return true;
        }
        lsum=0;
        rsum=0;
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter the no.of elements you want"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool result = equilibrium(arr,n);
    if(result)
    {
        cout<<"Equilibrium point exists";
    }
    else{
        cout<<"Equilibrium point does not exists";
    }
    return 0;
}
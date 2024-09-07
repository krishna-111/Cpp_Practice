#include<iostream>
using namespace std;
void union1(int *arr1,int *arr2,int m,int n)
{
    int i=0,j=0;
    for(i,j;i<m && j<n;)
    {
        if(i>0 && arr1[i]==arr1[i-1])
        {
            i++;
            continue;
        }
        if(j>0 && arr2[j]==arr2[j-1])
        {
            j++;
            continue;
        }
        if(arr1[i]<arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++;j++;
        }


    }
    while(i!=m )
    {
        if(arr1[i]!=arr1[i-1] || m==1){
            cout<<arr1[i]<<" ";
        i++;
        }
        
    }
    while(j!=n )
    {
        if(arr2[j]!=arr2[j-1] || n==1){
            cout<<arr2[j]<<" ";
        j++;
        }
        
    }
    
   
}
int main()
{
    int m,n;
    cout<<"Enter the size of first array"<<endl;
    cin>>m;
    cout<<"Enter the size of second array"<<endl;
    cin>>n;
    int arr1[m],arr2[n];
    cout<<"Enter the elements of first array"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the elements of second array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    union1(arr1,arr2,m,n);
    return 0;
}
#include<iostream>
using namespace std;
void merge(int *arr1,int *arr2,int n)
{
    int m=2*n;
    int i;
    int j;
    int k;
    int arr3[m];
    
        for(i=0,j=0,k=0;i<n && j<n ;k++)
        {
            if(arr1[i]<=arr2[j])
            {
                arr3[k]=arr1[i];
                i++;
            }
            else{
                arr3[k]=arr2[j];
                j++;
            }
        }
    if(i==n)
    {
        while(j!=n)
        {
            arr3[k++]=arr2[j++];
        }

    }
    else{
        while(i!=n)
        {
            arr3[k++]=arr1[i++];
        }
    }
    for(int l=0;l<m;l++)
    {
        cout<<arr3[l]<<" ";
    }

}
int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int arr1[n],arr2[n];
    cout<<"Enter the elements of first array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the elements of second array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr2[i];
    }
    merge(arr1,arr2,n);
    return 0;

}
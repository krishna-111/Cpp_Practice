#include<iostream>
using namespace std;
void intersection(int *arr1,int *arr2,int m,int n)
{
    int i,j;
    for(i=0,j=0;i<m,j<n;)
    {
        if(arr1[i]<arr2[j])
        {
            i++;
        }
        else if(arr1[i]>arr2[j])
        {
            j++;

        }
        else{
            if(i==0 || arr1[i-1]!=arr1[i]){
                cout<<arr1[i]<<" ";
                i++;j++;
                
            }
            else{i++;}
            
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
    intersection(arr1,arr2,m,n);
    return 0;
}
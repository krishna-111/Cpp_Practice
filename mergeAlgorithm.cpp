#include<iostream>
using namespace std;
int min(int a,int b)
{
    if(a>b) return b;
    else return a;
}
int merge(int *arr1,int *arr2,int n1,int n2)
{
   int n3=n1+n2;
   int arr[n3];
   int i=0,j=0,k=0;
   while(i<n1 && j<n2)
   {
    if(arr1[i]>arr2[j])
    {
        arr[k]=arr2[j];
        j++;
        k++;
    }
    else{
        arr[k]=arr1[i];
        i++;
        k++;
    }
   }
   if(i==n1)
   {
    while(k<n3)
    {
        arr[k]=arr2[j];
        k++;
        j++;
    }
   }
   if(j==n2)
   {
    while(k<n3)
    {
        arr[k]=arr1[i];
        k++;
        i++;
    }
   }
   cout<<"The elements of array after merging are"<<endl;
   for(int l=0;l<n3;l++)
   {
    cout<<arr[l]<<" ";
   }
   return 0;
}
int main()
{
    cout<<"Enter the number of elements you want in array1"<<endl;
    int n1;
    cin>>n1;
    cout<<"Enter the elements of the array1 in sorted order"<<endl;
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
     cout<<"Enter the number of elements you want in array2"<<endl;
    int n2;
    cin>>n2;
    cout<<"Enter the elements of the array2 in sorted order"<<endl;
    int arr2[n2];
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
    merge(arr1,arr2,n1,n2);
    return 0;
}
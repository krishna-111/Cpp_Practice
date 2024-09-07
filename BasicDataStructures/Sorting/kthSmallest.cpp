#include<iostream>
using namespace std;
int lamuto(int *arr,int l,int r)
{
    int pivot = arr[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }

    }
    int temp2=arr[i+1];
    arr[i+1]=pivot;
    arr[r]=temp2;
    return i+1;
    
}
int find(int *arr,int n,int k)
{
    int l=0,r=n-1;
    k--;
   int pivot =lamuto(arr,l,r);
   while(true){
    if(pivot == k)
   {
    return arr[pivot];
   }  
   else if(pivot > k)
   {
    r=pivot-1;
    pivot = lamuto(arr,l,r);
   }
   else{
    l=pivot+1;
    pivot = lamuto(arr,l,r);
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
    int k;
    cout<<"Enter the smallest element you want to find"<<endl;
    cin>>k;
    int smallest = find(arr,n,k);
    cout<<"The smallest element is "<<smallest;
    return 0;
}
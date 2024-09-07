#include<iostream>

using namespace std;

int collection(int *arr,int n)
{
   int a=arr[0];
   int b=arr[n-1];
   int min,max;
   int sum=0;
   if(a>b)
   {
    min=b;
    max=a;   
   }
   else{
    min=a;
    max=b;
   }
   for(int i=1;i<n-1;i++)
   {
    if(arr[i]<min)
    {
        sum += (min-arr[i]);
    }

   }
   return sum;
}

int main()
{
    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int collected = collection(arr,size);
    cout<<"The maximum quantity of rain water collected  is "<<collected<<endl;
    return 0;

}
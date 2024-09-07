#include<iostream>

using namespace std;

int collection(int *arr,int n)
{
    int i=0;
    while(arr[i]==0)
    {
        i++;
    }
    for(int j=i;j<n;j++)
    {
        int a = i;
        while(arr[i++]<arr[a])
        {

        }

    }
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
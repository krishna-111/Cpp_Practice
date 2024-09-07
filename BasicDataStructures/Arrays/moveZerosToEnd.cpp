#include<iostream>
using namespace std;
void move(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            int j=i+1;
            while(arr[j]==0 && j<n)
            {
                j++;
            }
            
            if(j<n){
            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
            else{
                break;
            }
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
    move(arr,size);
    cout<<"After moving zeros to end the array is"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;



}
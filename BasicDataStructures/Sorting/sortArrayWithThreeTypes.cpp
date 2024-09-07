#include<iostream>
using namespace std;
void found(int *arr,int n)
{
    int i=-1,j=n;
    while(true)
    {
        do{
            i++;
        }while(arr[i]==0 || arr[i]==1);
        do{
            j--;
        }while(arr[j]==2);
        if(i>=j)
        {break;}
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    i=-1;
    j++;
    while(true)
    {
        do{
            i++;
        }while(arr[i]==0 );
        do{
            j--;
        }while(arr[j]==1);
        if(i>=j)
        {break;}
        int temp = arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
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
    found(arr,n);
    cout<<"The array after sorting is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
void findfrequencies(int *arr,int n)
{
    int result=0,temp=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[result])
        {
            count++;
            if(i==n-1)
            {
                cout<<arr[i]<<" "<<count<<endl;
            }
            
        }
        else{
            
            cout<<arr[i-1]<<" "<<count<<endl;
            count=1;
            result = i;
            if(i==n-1)
            {
                cout<<arr[i]<<" "<<count<<endl;
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
    findfrequencies(arr,size);
    return 0;
}
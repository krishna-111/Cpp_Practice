#include<iostream>
using namespace std;
void bubblesort(int *arr,int n)
{
    
    int count = 0;
    for(int i=0;i<n-1;i++)
    {
        bool flag = false;
        count++;
        for(int j=1;j<n-i;j++)
        {
            
            if(arr[j-1]>arr[j])
            {
                flag= true;
                int temp = arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
        if(flag==false)
        {
            break;
        }
    }
    cout<<count<<endl;
}
int main()
{
    int n;

    cout<<"Enter the number of elements you want"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr,n);
    cout<<"After sorting elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;


}
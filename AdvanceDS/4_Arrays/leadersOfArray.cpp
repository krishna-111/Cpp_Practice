#include<iostream>

using namespace std;
void findleaders(int *arr,int n)
{
    int max=INT32_MIN;
    
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>max)
        {
            cout<<arr[i]<<" ";
            max=arr[i];
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
    findleaders(arr,size);
    return 0;

}
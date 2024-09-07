#include<iostream>
using namespace std;
int n;
int delete1(int *arr,int pos)
{
    int temp=arr[pos];
    for(int i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n=n-1;
    return temp;
}
int remove(int *arr)
{
    for(int i=0;i<n;)
    {
        if(arr[i]==arr[i+1])
        {
            int result = delete1(arr,i+1);

        }
        else{
            i++;
        }
    }
    cout<<n<<endl;
    cout<<"After removing duplicates array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 1;
}


int main()
{

    
    cout<<"Enter the no. of elements you want in an array"<<endl;
    cin>>n;
    if(n==0){
    cout<<"please enter valid size"<<endl;
    return 0;}
    cout<<"Enter the elements of array"<<endl;
    int *arr = new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     remove(arr);
   
    return 0;

}
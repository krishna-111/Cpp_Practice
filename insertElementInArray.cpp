#include<iostream>
using namespace std;
bool insert(int *arr,int n,int pos,int value,int ele)
{
if(ele==n){
    cout<<"Array is full";
    return 0;
}
else{
    if(pos==ele)
    {
        arr[pos]=value;
        return 1;
    }
    else{
        for(int i=ele-1;i>=pos;i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos]=value;
        return 1;

    }
}

}




int main()
{
    int n;
    cout<<"Enter the no. of elements you want in an array"<<endl;
    cin>>n;
    if(n==0){
    cout<<"please enter valid size"<<endl;
    return 0;}
    cout<<"Enter the elements you want to enter"<<endl;
    int ele;
    cin>>ele;
    cout<<"Enter the elements of array"<<endl;
    int *arr = new int[n];
    for(int i=0;i<ele;i++)
    {
        cin>>arr[i];
    }
    int pos,value;
    cout<<"Enter the position you want to insert"<<endl;
    cin>>pos;
    cout<<"Enter the value you want to insert"<<endl;
    cin>>value;
    bool result = insert(arr,n,pos,value,ele);
    if(result){
    cout<<"After insertion"<<endl;
    for(int i=0;i<=ele;i++)
    {
        cout<<arr[i]<<" ";
    }
    }
    
    return 0;

}
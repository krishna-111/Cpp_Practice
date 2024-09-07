#include<iostream>
using namespace std;
int shift(int *arr,int n,int pos)
{
    int temp[pos];
    int i,j;
    for(i=0,j=0;i<pos;i++,j++)
    {
        temp[i]=arr[j];
    }
    int k,l;
    for(k=pos,l=0;k<n;k++,l++)
    {
        arr[l]=arr[k];

    }
    int m,p;
    for(m=n-pos,p=0;m<n;m++,p++)
    {
        arr[m]=temp[p];
    }
    cout<<"The elements after shifting are"<<endl;
    for(int o=0;o<n;o++)
    {
        cout<<arr[o]<<" ";
    }
return 1;

}



int main()
{
    int n;
    cout<<"Enter the no. of elements you want to enter"<<endl;
    cin>>n;
    if(n==0)
    {
        cout<<"Enter the appropriate size"<<endl;
        return 0;
    }
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int d;
    cout<<"Enter the positions you want to left shift"<<endl;
    cin>>d;
    shift(arr,n,d);
    return 0;
}
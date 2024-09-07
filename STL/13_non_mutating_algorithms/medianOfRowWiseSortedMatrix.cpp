#include<iostream>
#include<cmath>
using namespace std;
void merge(int *ptr1,int *ptr2)
{

}
int findmedian(int **arr,int n,int m)
{
    int count=1;
    while(n!=1)
    {
        for(int i=0;i<n-1;i=i+(2*count))
        {
            merge(arr[i],arr[i+count]);

        }
        count=count*2;
        //n=static_cast<int>(ceil(n/2));
    }
}
int main()
{
    int n,m;
    cout<<"Enter the number of rows you want in array"<<endl;
    cin>>n;
    cout<<"Enter the number of columns you want in array"<<endl;
    cin>>m;
    int arr[n][m];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[n][m];
        }
    }
    int median = findmedian(arr,n,m);
    cout<<"The median is "<<median<<endl;
    return 0;
}
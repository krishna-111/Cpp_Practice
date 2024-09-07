#include<iostream>
using namespace std;
template <typename T,int limit>
T findmax(T arr[],int n)
{
    if(n>limit){
        cout<<"Unable to process"<<endl;
        exit(0);
    }
    int maxi=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>maxi)
        maxi=arr[i];
    }
    return maxi;
}
int main()
{
    cout<<"Enter the number of elements you want in array\n";
    int n;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maximum1=findmax<int,4>(arr,n);
    
    cout<<"Enter the number of elements you want in array\n";
    int m;
    cin>>m;
    cout<<"Enter the elements of array"<<endl;
    double arr1[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    int maximum2=findmax<double,4>(arr1,m);
    cout<<"The maximum value is "<<maximum1<<endl;
    cout<<"The maximum value is "<<maximum2<<endl;
    return 0;

}
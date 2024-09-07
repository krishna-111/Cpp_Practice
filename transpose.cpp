#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the number of rows you want"<<endl;
    cin>>m;
    cout<<"Enter the number of columns you want"<<endl;
    cin>>n;
    cout<<"Enter the elements in the matrix"<<endl;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The array is"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The transpose of the matrix is"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cout<<arr[j][i]<<" ";
        }
         cout<<endl;
    }
   
return 0;
}
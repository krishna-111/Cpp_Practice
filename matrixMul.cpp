#include<iostream>
using namespace std;
int main()
{
    int m1,n1,m2,n2;
    cout<<"Enter the number of rows you want in matrix 1"<<endl;
    cin>>m1;
    cout<<"Enter the number of columns you want in matrix 1"<<endl;
    cin>>n1;
    cout<<"Enter the elements in the matrix1"<<endl;
    int arr1[m1][n1];
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter the number of rows you want in matrix 2"<<endl;
    cin>>m2;
    cout<<"Enter the number of columns you want in matrix 2"<<endl;
    cin>>n2;
    int arr2[m2][n2];
    if(n1==m2)
    {
    cout<<"Enter the elements in the matrix2"<<endl;
    
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>arr2[i][j];
        }
    }
    }
    else{
        cout<<"Multiplication is not possible with your inputs"<<endl;
        return 0;
    }
    cout<<"The matrix1 is"<<endl;
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"The matrix2 is"<<endl;
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
   
    int result[m1][n2];
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            result[i][j]=0;
           for(int k=0;k<n1;k++)
           {
            result[i][j]+=(arr1[i][k]*arr2[k][j]);
           }
           
        }
         cout<<endl;
    }
     cout<<"The multiplication  of the 2 matrices is"<<endl;
     for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
   
return 0;
}
#include<iostream>
using namespace std;
int count(int arr[],int number)
{
    int temp=0,i,j;
    for(i=0;i<number;i++)
    {
        for(j=0;j<number;j++)
        {
            if(i==j)
            continue;
            if(arr[i]==arr[j])
            break;
        

        }
        if(j==number)
        temp++;
        
    }
    return temp;
}
int main()
{
    cout<<"Enter the no. of elements you want"<<endl;
    int number;
    cin>>number;
    cout<<"Enter the elements of the array"<<endl;
    int arr[number];
    for(int i=0;i<number;i++)
    {
        cin>>arr[i];

    }
    int result = count(arr,number);
    cout<<result;
    return 1;
}
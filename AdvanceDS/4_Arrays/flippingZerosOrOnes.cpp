#include<iostream>
using namespace std;
int findflippingOnes(int *arr,int n)
{
    int count1 = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            continue;
        }
        else{
            count1++;
            while(arr[i]!=0)
            {
                i++;
            }
            i--;
        }
    }
    return count1;
}
int findflippingTwos(int *arr,int n)
{
    int count2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            continue;
        }
        else{
            count2++;
            while(arr[i]!=1)
            {
                i++;
            }
            i--;
        }
    }
    return count2;
}
void describeOnes(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            continue;
        }
        else{
            int temp = i;
            while(arr[i]==1)
            {
                i++;
            }
            i--;
            cout<<"From "<<temp<<" to "<<i<<endl;
        }
    }

}
void describeZeros(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            continue;
        }
        else{
            int temp = i;
            while(arr[i]==0)
            {
                i++;
            }
            i--;
            cout<<"From "<<temp<<" to "<<i<<endl;
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
    int flip1 = findflippingOnes(arr,size);
    int flip2 = findflippingTwos(arr,size);
    if(flip1<flip2)
    {
        describeOnes(arr,size);
    }
    else
    {
        describeZeros(arr,size);
    }
}
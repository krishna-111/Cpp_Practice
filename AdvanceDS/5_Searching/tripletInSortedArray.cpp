#include<iostream>
#include<algorithm>
using namespace std;
 
bool find(int *arr,int n,int k){
    int temp;
    for(int i=0;i<n-2;i++)
    {
        temp = k-arr[i];
        int l=(i+1);
        int h=(n-1);
        while(l<h)
        {
            if(arr[l]+arr[h]==temp)
            {
                return true;
            }
            else if(arr[l]+arr[h]>temp)
            {
                h--;
            }
            else{
                l++;
            }
        }

    }
    return false;
    




}
    

int main()
{
    int n;

    cout<<"Enter the number of elements you want"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"enter the sum you want to search"<<endl;
    cin>>k;
    
    bool res = find(arr,n,k);
    if(res)
    {
        cout<<"The specific pair is present"<<endl;
    }
    else{
        cout<<"The pair is not present";
    }
}
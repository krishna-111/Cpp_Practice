#include<iostream>
#include<algorithm>
using namespace std;
void distribute(int *arr,int n,int k)
{
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int j=0;
    int min=INT32_MAX;
    int temp;
    int index=0;
    while(j<n-k+1)
    {
        
            temp=arr[j+k-1]-arr[j];
            if(temp<min)
            {
                min=temp;
                index=j;
            }
        
        j++;
    }
    cout<<"The minimum value is "<<min<<endl;
    cout<<"The required covers are"<<endl;
    for(int i=index;i<=k;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int covers;
    cout<<"Enter the number of chocolate covers you want"<<endl;
    cin>>covers;
    int arr[covers];
    cout<<"Enter the chocolates in each cover"<<endl;
    for(int i=0;i<covers;i++)
    {
        cin>>arr[i];
    }
    int people;
    cout<<"Enter the no. of people you want to distribute chocolates"<<endl;
    cin>>people;
    distribute(arr,covers,people);

    return 0;
}
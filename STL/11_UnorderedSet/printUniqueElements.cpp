#include<iostream>
#include<unordered_set>
using namespace std;
void printunique(int *arr,int n)
{
    unordered_set<int> us;
    for(int i=0;i<n;i++)
    {
        us.insert(arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        int temp=us.count(arr[i]);
        if(temp)
        {
            cout<<arr[i]<<" ";
            us.erase(arr[i]);
        }
    }
}
int main()
{
    int number;
    cout<<"Enter the number of elements you want in array"<<endl;
    cin>>number;
    int arr[number];
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<number;i++)
    {
        cin>>arr[i];
    }
    printunique(arr,number);
    return 0;

}
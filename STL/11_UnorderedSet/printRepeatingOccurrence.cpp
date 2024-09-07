#include<iostream>
#include<unordered_set>
using namespace std;
void printrepeated(int *arr,int n)
{
    unordered_set<int> us;
    for(int i=0;i<n;i++)
    {
        if(us.count(arr[i])==0)
        {
            us.insert(arr[i]);
        }
        else{
            cout<<arr[i]<<" ";
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
    printrepeated(arr,number);
    return 0;
}
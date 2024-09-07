#include<iostream>
using namespace std;
template <typename T>
T mymax(T arr[],int size)
{
    T res = arr[0];
    for(int i=1;i<size;i++)
    {
        if(res<arr[i])
        {
            res=arr[i];
        }
    }
    return res;
}
int main()
{
    int arr[]={2,3,46,5,6,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<mymax<int>(arr,size);
    cout<<endl;
    float arr1[]={2.5,3.6,46.8,534,6.7,7.1};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    cout<<mymax<float>(arr1,size1);
    return 1;
}
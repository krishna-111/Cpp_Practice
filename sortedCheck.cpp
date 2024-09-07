#include<iostream>
using namespace std;
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
    if(number == 0 || number==1)
    {
        cout<<"It is sorted"<<endl;

    }
    else
    {
        for(int i=0;i<number;i++)
        {
            if(arr[i]>arr[i+1])
            {
                cout<<"Not sorted";
                return 0;
            }

        }
        cout<<"Array is Sorted";

    }
    return 0;

}
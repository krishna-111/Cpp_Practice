#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr1[]={10,20,20,40,30,30,50,80};
    int arr2[]={80,40,20,20,30,30};
    if(is_permutation(arr1,arr1+8,arr2))
    {
        cout<<"True"<<endl;

    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}
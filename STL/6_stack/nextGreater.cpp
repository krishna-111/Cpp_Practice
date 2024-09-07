#include<iostream>
#include<stack>
using namespace std;
void nextgreater(int *arr,int n)
{
    stack<int> st;
    int arr2[n];
    st.push(arr[n-1]);
    arr2[n-1]=-1;
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]<=st.top())
        {
            arr2[i]=st.top();
            st.push(arr[i]);
        }
        else{
            while(!st.empty()&& st.top()<arr[i])
            {
                st.pop();
            }
            if(st.empty()){
                arr2[i]=-1;
            }
            else{
                arr2[i]=st.top();
            }
            st.push(arr[i]);
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }

}
int main()
{
    int n;
    cout<<"Enter the number of elements you want"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    nextgreater(arr,n);
    return 0;
}

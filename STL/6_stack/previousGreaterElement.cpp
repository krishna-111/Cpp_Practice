#include<iostream>
#include<stack>
using namespace std;
void prevgreater(int *arr,int n)
{
    stack<int> st;
    int arr2[n];
    st.push(arr[0]);
    arr2[0]=-1;
    for(int i=1;i<n;i++)
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
    prevgreater(arr,n);
    return 0;
}

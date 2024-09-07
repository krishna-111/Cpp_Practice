#include<iostream>
#include<stack>
using namespace std;
void stackspan(int *arr,int n)
{
    stack<int> st;
    int arr2[n];
    st.push(0);
    arr2[0]=1;
    for(int i=1;i<n;i++)
    {
        
        if(arr[i]<=arr[st.top()])
        {
            arr2[i]=1;
            st.push(i);

        }
        else
        {
            int j=1;
            while(!st.empty() && arr[i]>arr[st.top()])
            {
                j+=arr2[st.top()];
                st.pop();
            }
            arr2[i]=j;
            st.push(i);
        }

        
    }
    for(int x:arr2)
    {
        cout<<x<<" ";
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
    stackspan(arr,n);
    return 0;
}
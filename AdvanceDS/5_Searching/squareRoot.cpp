#include<iostream>
using namespace std;
int square(int n)
{
    int first = 1; 
    int last = n;
   
    while(first<=last)
    {
         int mid = (first+last)/2;
        int temp = mid * mid;
        if(temp == n || ((temp<n)&&(((mid+1)*(mid+1)>n))))
        {
            return mid;
        }
        else if(temp > n)
        {
            last=mid-1;
        }
        else{
            first = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int res = square(n);
    cout<<res;
    return 0;
}
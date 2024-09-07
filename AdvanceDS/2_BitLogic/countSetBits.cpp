#include<iostream>
using namespace std;
int check(int n)
{
    int temp = n;
    int count = 0;
    while(temp!=1)
    {
        if(temp%2==1)
        {
            count++;
        }
        temp = temp /2;
    }
    return count+1;
}
int main()
{
    int number;
    cout<<"Enter the required number"<<endl;
    cin>>number;
    int res = check(number);
    cout<<"The entered number has "<<res<<" no. of set bits";
    return 0;

}
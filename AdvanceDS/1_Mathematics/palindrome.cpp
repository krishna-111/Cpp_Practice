#include<iostream>
using namespace std;

bool ispalindrome(int number)
{
    
    int rev=0;
    int n=number;
    while(n>0)
    {
        int temp = n % 10;
        rev = rev * 10 +temp;
        n=n/10;

    }
    cout<<rev<<endl;
    return rev==number;
}
int main()
{
    int number;
    cout<<"Enter the number you want"<<endl;
    cin>>number;
    bool result = ispalindrome(number);
    if(result)
    {
        cout<<"The number is palindrome"<<endl;
    }
    else{
        cout<<"It is not palindrome"<<endl;
    }
    return 0;
}
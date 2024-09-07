#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string you want"<<endl;
    getline(cin,str);
    auto i2=str.begin();
    cout<<*i2;
    int i=0;
    int j=str.length()-1;
    while(i<=j)
    {
        if(str[i]==str[j])
        {
            i++;
            j--;
        }
        else
        {
            cout<<"Not a palindrome";
            return 0;
        }

    }
    cout<<"Palindrome";
    return 0;
}
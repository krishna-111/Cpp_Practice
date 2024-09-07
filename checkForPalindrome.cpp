#include<iostream>
using namespace std;
bool palindrome_check(string str,int i,int j)
{
    if(i==j )
    {
        return true;
    }
    if(j==(i+1))
    {
        if(str[i]==str[j])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else{
        if(str[i]==str[j])
        {
            return palindrome_check(str,i+1,j-1);

        }
        else{
            return false;
        }
    }


}
int main()
{
    string str;
    cout<<"Enter the string you want to enter ";
    cin>>str;
    int i,j;
    i=0;
    j=str.length();
    bool result = palindrome_check(str,i,j-1);
    if(result)
    {
        cout<<"It is a palindrome";
    }
    else{
        cout<<"It is not a palindrome";
    }
    return 0;
}
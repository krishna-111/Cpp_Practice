#include<iostream>
#include<string>
using namespace std;
bool check(string str)
{
    if(str.length()<26)
    {
        return 0;
    }
    int arr[256];
    for(int i=0;i<str.length();i++)
    {
        arr[str[i]]++;
    }
    for(int i=65,j=97;i<=80,j<=122;i++,j++)
    {
        if(arr[i]==0 && arr[j]==0)
        {
            return 0;
        }
        
    }
    return 1;
}
int main()
{
    string str;
    cout<<"Enter the string you want to check for pangram"<<endl;
    getline(cin,str);
    bool res=check(str);
    if(res)
    {
        cout<<"pangram";
    }
    else{
        cout<<"Not a pangram";
    }
    return 0;

}
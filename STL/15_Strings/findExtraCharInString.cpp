#include<iostream>
#include<string>
using namespace std;
char findextra(string str1,string str2)
{
    if(str1==str2)
    {
        return '\0';
    }
    for(int i=0;i<str2.length();i++)
    {
        int res=str1.find(str2[i]);
        if(res==string::npos)
        {
            return str2[i];
        }
        else{
            str1.erase(res,1);
            cout<<str1<<endl;
        }
        

    }
}
int main()
{
    string str1,str2;
    cout<<"Enter the string 1"<<endl;
    cin>>str1;
    cout<<"Enter the string 2 which might contain extra character"<<endl;
    cin>>str2;
    char ch=findextra(str1,str2);
    if(ch=='\0')
    {
        cout<<"Both strings are same";
        return 0;
    }
    cout<<"The extra character is "<<ch<<endl;
    return 0;


}
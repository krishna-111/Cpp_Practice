#include<iostream>
using namespace std;
int main()
{
    string str1="krishna";
    string str2="Bindu";
    string str3="nikklaus";
    cout<<str1.length()<<endl;
    str2+="reddy";
    cout<<str2<<endl;
    cout<<str3.substr(3)<<endl;
    cout<<str1.substr(0,5)<<endl;
    int position = str2.find("ind");
    cout<<position<<endl;
    int position2=str1.find("rss");
    if(position2==string::npos)
    {
        cout<<"Not present"<<endl;
    }
    if(str1==str2)
    {
        cout<<"Both are same"<<endl;

    }
    else if(str1<str2)
    {
        cout<<"smaller"<<endl;
    }
    else{
        cout<<"Greater"<<endl;
    }
    for(int i=0;i<str1.length();i++)
    {
        cout<<str1[i]<<" ";
    }
    cout<<endl;
    for(auto &x:str2)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto it=str3.begin();it!=str3.end();it++)
    {
        cout<<*it<<" ";

    }
    cout<<endl;






}
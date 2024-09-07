#include<iostream>
using namespace std;
void findpattern(string str1,string str2)
{
    int res=str1.find(str2);
    if(res==string::npos)
    {
        cout<<"It is not found";
        return;
    }
    while(res!=string::npos)
    {
        cout<<res<<" ";
        res=str1.find(str2,res+1);

    }


}
int main()
{
    string text,pattern;
    cout<<"Enter the text you want"<<endl;
    getline(cin,text);
    cout<<"Enter the pattern you want"<<endl;
    cin>>pattern;
    findpattern(text,pattern);
    return 0;

}
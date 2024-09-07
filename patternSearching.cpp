#include<iostream>
using namespace std;
int find(string str1,string str2)
{
    return str1.find(str2);
}
int main()
{
    string str1,str2;
    cout<<"Enter the long text"<<endl;
    getline(cin,str1);
    cout<<"Enter the sub pattern you want"<<endl;
    getline(cin,str2);
    int len=str1.length();
    int len2=str2.length();
    while(len!=0)
    {
        int res = find(str1,str2);
        if(res==string::npos)
        {
            cout<<"pattern not found"<<endl;
            return 0;
        }
        else{
            cout<<"pattern found at"<<res<<endl;
            
            for(int i=(res+len2),j=0;i<len;i++,j++)
            {
                str1[j]=str1[i];
            }
            find(str1,str2);
            
        }
    }

}
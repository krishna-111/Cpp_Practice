#include<iostream>
using namespace std;
string position(string str)
{

   int res = str.find(".");
   if(res==string::npos)
   {
    return;
   }
   return str.substr(res+1);
}
int main()
{
    string str1;
    cout<<"Enter the floating point number "<<endl;
    cin>>str1;
    string str2=position(str1);
    cout<<"The number after decimal is "<<str2;

}
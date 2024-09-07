#include<iostream>
#include<vector>
using namespace std;
struct student{
    int age;
    string name;

};
int main(){
    student s1={24,"krishna"};
    student s2={25,"Bindu"};
    vector<student> v;
    v.push_back(s1);
    v.push_back(s2);
    cout<<v.front().age<<endl;
    cout<<v.front().name<<endl;
    cout<<v.back().name<<endl;
    



}
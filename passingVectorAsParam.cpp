#include<iostream>
#include<vector>
using namespace std;
struct student
{
    string f_name;
    string l_name;
    student(string x,string y)
    {
        f_name=x;
        l_name=y;
    }
};
void fun(vector<int> v)
{
    v.push_back(9);
}
int main()
{
    vector<int> v3;
    cout<<v3.capacity()<<endl;
    v3.push_back(1);
    cout<<v3.capacity()<<endl;
    v3.push_back(2);
    cout<<v3.capacity()<<endl;
     v3.push_back(3);
     
    cout<<v3.capacity()<<endl;
     v3.push_back(32);
    cout<<v3.capacity()<<endl;
     v3.push_back(12);
    cout<<v3.capacity()<<endl;
    vector<int> v {1,2,3,5,6};
    fun(v);
    for(int x: v)
    cout<<x<<" ";
    vector<student> v2;
    student s1("krishna","rotta");
    student s2("Rama","krishna");
    v2.push_back(s1);
    v2.push_back(s2);
    for(student x: v2)
    {
        cout<<x.f_name<<" ";
    }
    return 0;
}
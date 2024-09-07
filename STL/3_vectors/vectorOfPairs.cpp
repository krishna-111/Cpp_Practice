#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortacctomarks(int *marks,int *roll,int n)
{
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        v.push_back(pair<int,int>(marks[i],roll[i]));
    }
    sort(v.begin(),v.end(),greater<pair<int,int>>());
    for(int i=0;i<n;i++)
    {
        cout<<v[i].second<<" "<<v[i].first;
        cout<<endl;

    }

}
int main()
{
    int n;
    cout<<"Enter the number of student details you want to enter "<<endl;
    cin>>n;
    int marks[n];
    int rollno[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the details of "<<(i+1)<<" student as in marks and rollno."<<endl;
        cin>>marks[i];
        cin>>rollno[i];
    }
    sortacctomarks(marks,rollno,n);
    return 0;
}

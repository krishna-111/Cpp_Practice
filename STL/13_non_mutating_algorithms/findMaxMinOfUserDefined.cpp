#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct point{
    int x;
    int y;
    point(int i,int j){
        x=i;y=j;
    }
};
bool mycmp(point p1,point p2){return p1.x>p2.x;}
int main()
{
    vector<point> v={{1,2},{10,200},{100,1},{3,4000}};
    auto it1=max_element(v.begin(),v.end(),mycmp);
    cout<<it1->x<<" "<<it1->y<<endl;
    auto it2=min_element(v.begin(),v.end(),mycmp);
    cout<<it2->x<<" "<<it2->y<<endl;
        return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct point{
    int x;int y;
    point(int i,int j){x=i;y=j;}
};
bool mycmp(point p1,point p2)
{
    return p1.x>p2.x;
}
int main()
{
    vector<point> v={{1,100},{2,200},{3,300},{4,400},{5,500}};
    sort(v.begin(),v.end(),mycmp);
    point p3(2,20);
    bool res=binary_search(v.begin(),v.end(),p3,mycmp);
    if(res)
    {
        cout<<"found"<<endl;

    }
    else{
        cout<<"Not found"<<endl;
    }



    return 0;
}
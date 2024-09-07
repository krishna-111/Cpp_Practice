//STL section - priority queue - L1
#include<iostream>
#include<queue>
using namespace std;
struct person 
{
    int age;
    float ht;
    person(int a,float b)
    {
        age=a;
        ht=b;
    }
};
struct mycmp
{
    bool operator()(person const &p1,person const &p2){
    return p1.ht<p2.ht;
    }
};
int main()
{
    person p1(23,5.5);
    person p2(14,4);
    person p3(25,6.1);
    priority_queue<person,vector<person>,mycmp> pq;
    pq.push(p1);
    pq.push(p2);
    pq.push(p3);
    cout<<pq.size()<<endl;
    while(pq.empty()==false)
    {
        cout<<pq.top().age<<" "<<pq.top().ht<<endl;
        pq.pop();
    }
    return 0;



}
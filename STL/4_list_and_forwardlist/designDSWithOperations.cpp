#include<iostream>
#include<list>
using namespace std;
list<int> li;
void insert(int j)
{
    
    li.push_back(j);
}
void print()
{
    for(auto x:li)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}
void replace(int replaced,list<int> li)
{
    list<int>::iterator it;
    it=li.begin();
    for(auto x:li)
    {
        if(x!=replaced){
            it++;
        }
        else{
            break;
        }
    }
    auto li2 = li.erase(it);
    li.insert(li2,li.begin(),li.end());

}
int main()
{
    int number;
    cout<<"Enter the number of elements you want to insert"<<endl;
    cin>>number;
    cout<<"Insert those elements"<<endl;
    int j;
    for(int i=0;i<number;i++)
    {
        cin>>j;
        insert(j);

    }
    print();
    int replaced;
    cout<<"Enter the element you want to be replaced"<<endl;
    cin>>replaced;
    list<int> li2={2,3,4};
    replace(replaced,li2);
    print();
    return 0;


}
#include<iostream>
using namespace std;
template <typename T>
T mymax(T x,T y)
{
    return (x>y)?x:y;
}
class student
{
    int marks;
    
    public:
    student(int x){
        marks=x;
    }
    int getmarks()
    {
        return marks;
    }
};
int main()
{
   cout<<mymax<int>(5,10)<<endl;
   cout<<mymax<double>(9.5,12.2)<<endl;
   cout<<mymax<char>('a','A')<<endl;
   student s1(99);
   student s2(56);
   cout<<mymax<int>(s1.getmarks(),s2.getmarks())<<endl;
   return 0; 

}
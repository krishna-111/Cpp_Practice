#include<iostream>
using namespace std;

int check(int number,int k)
{
    if(number==0)
    {
        return k;
    }
    return k+check(number/10,number%10);

}
int main()
{
    int number;
    cout<<"Enter the number you want"<<endl;
    cin>>number;
    int result = check(number/10,number%10);
    cout<<"The result is "<<result;
    return 0;
}


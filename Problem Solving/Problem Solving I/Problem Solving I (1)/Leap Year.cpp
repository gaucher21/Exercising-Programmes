#include<iostream>
using namespace std;
int main()
{
    int year=0;
    bool flag=0;
    cin>>year;
    if(year%4==0)
    {
        flag=1;
    }
    if(year%100==0)
    {
        flag=0;
    }
    if(year%400==0)
    {
        flag=1;
    }
    if(flag==0)
    {
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    int N=0;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N-i;j++)
        cout<<" ";
        for(int k=1;k<=2*i-1;k++)
        cout<<"*";
        cout<<endl;
    }
    for(int i=N-1;i>=1;i--)
    {
        for(int j=N-i;j>=1;j--)
        cout<<" ";
        for(int k=2*i-1;k>=1;k--)
        cout<<"*";
        cout<<endl;
    }
    return 0;
}

#include<iostream>
using namespace std;
int main()
{
    bool seat[11][11];
    for(int j=0;j<11;j++)
    {
        for(int k=0;k<11;k++)
        seat[j][k]=0;
    }
    int N=0,M=0,Q=0;
    int a[10000],b[10000],c[10000];
    cin>>N>>M>>Q;
    for(int i=0;i<Q;i++)
    cin>>a[i]>>b[i]>>c[i];
    for(int r=0;r<Q;r++)
    {
        if(a[r]==1)
        seat[b[r]][c[r]]=1;
        else if(a[r]==2)
        seat[b[r]][c[r]]=0;
        else if(a[r]==3)
        {
            if(seat[b[r]][c[r]]==1)
            cout<<"unavailable"<<endl;
            else if(seat[b[r]][c[r]]==0)
            cout<<"available"<<endl;
        }
    }
    return 0;
}

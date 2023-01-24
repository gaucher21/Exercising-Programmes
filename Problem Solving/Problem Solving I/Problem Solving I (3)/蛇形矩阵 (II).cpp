#include<iostream>
using namespace std;
int main()
{
    int a[31][31]={0};
    int N=0,m=1;
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        if(i%2!=0)
        {
            for(int r=1,j=i,k=1;r<=i;r++,j--,k++)
            {
                a[j][k]=m;
                m++;
            }
        }
        if(i%2==0)
        {
            for(int r=1,j=1,k=i;r<=i;r++,j++,k--)
            {
                a[j][k]=m;
                m++;
            }
        }
    }
    for(int i=N-1;i>=1;i--)
    {
        if(i%2!=0)
        {
            for(int r=1,j=N,k=N+1-i;r<=i;r++,j--,k++)
            {
                a[j][k]=m;
                m++;
            }
        }
        if(i%2==0)
        {
            for(int r=1,j=N+1-i,k=N;r<=i;r++,j++,k--)
            {
                a[j][k]=m;
                m++;
            }
        }
    }
        for(int k=1;k<N+1;k++)
    {
        for(int r=1;r<N+1;r++)
        {
            printf("%4d",a[k][r]);
        }
        cout<<endl;
    }
    return 0;
}

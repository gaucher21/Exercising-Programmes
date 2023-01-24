#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int N=0,M=0;
    int a[31][31]={0};
    cin>>N;
    if(N%2==0)
    M=N/2;
    else
    M=N/2+1;    
    for(int i=1;i<N+1;i++)
    {
        for(int j=1;j<N+1;j++)
        {   
            if(i<M+1 && j<M+1)
            a[i][j]=min(i,j);
            else if(i<M+1 && j>M)
            a[i][j]=min(i,N+1-j);
            else if(i>M && j<M+1)
            a[i][j]=min(N+1-i,j);
            else if(i>M && j>M)
            a[i][j]=min(N+1-i,N+1-j);
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

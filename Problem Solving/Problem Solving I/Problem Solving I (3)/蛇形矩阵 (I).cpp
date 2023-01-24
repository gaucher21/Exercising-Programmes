#include<iostream>
using namespace std;
int main()
{
    int N=0,m=0;
    int a[31][31]={0};
    cin>>N;
    for(int i=1;i<N+1;i++)
    {
        for(int j=1;j<N+1;j++)
        {
            if(i%2!=0)
            {
                m=i/2+1;
                a[i][j]=2*N*(m-1)+j;
            }
            else
            {
                a[i][j]=N*i-(j-1);
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

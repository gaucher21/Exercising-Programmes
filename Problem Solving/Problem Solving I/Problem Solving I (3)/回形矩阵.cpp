#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int N=0,j=1,k=1,m=1;
    int a[31][31]={0};
    cin>>N;
    if(N%2!=0)
    {
        for(int i=1;i<=2*N-1;i++)
        {   
            if(i%2!=0)
            {
                if((int)ceil((2*N-i)/2.0)%2!=0)
                {
                    for(int r=1;r<=(int)ceil((2*N-i)/2.0);r++)
                    {
                        a[j][k]=m;
                        k++;    
                        m++;
                    }
                    k--;
                    j++;
                }
                if((int)ceil((2*N-i)/2.0)%2==0)
                {
                    for(int r=1;r<=(int)ceil((2*N-i)/2.0);r++)
                    {
                        a[j][k]=m;
                        k--;
                        m++;
                    }
                    k++;
                    j--;
                }
            }
            if(i%2==0)
            {
                if(((2*N-i)/2)%2!=0)
                {
                    for(int r=1;r<=(2*N-i)/2;r++)
                    {
                        a[j][k]=m;
                        j--;
                        m++;
                    }
                    j++;
                    k++;
                }
                if(((2*N-i)/2)%2==0)
                {
                    for(int r=1;r<=(2*N-i)/2;r++)
                    {
                        a[j][k]=m;
                        j++;
                        m++;
                    }
                    j--;
                    k--;
                }
            }
        }
    }
    if(N%2==0)
    {
            for(int i=1;i<=2*N-1;i++)
        {   
            if(i%2!=0)
            {
                if((int)ceil((2*N-i)/2.0)%2!=0)
                {
                    for(int r=1;r<=(int)ceil((2*N-i)/2.0);r++)
                    {
                        a[j][k]=m;
                        k--;    
                        m++;
                    }
                    k++;
                    j--;
                }
                if((int)ceil((2*N-i)/2.0)%2==0)
                {
                    for(int r=1;r<=(int)ceil((2*N-i)/2.0);r++)
                    {
                        a[j][k]=m;
                        k++;
                        m++;
                    }
                    k--;
                    j++;
                }
            }
            if(i%2==0)
            {
                if(((2*N-i)/2)%2!=0)
                {
                    for(int r=1;r<=(2*N-i)/2;r++)
                    {
                        a[j][k]=m;
                        j++;
                        m++;
                    }
                    j--;
                    k--;
                }
                if(((2*N-i)/2)%2==0)
                {
                    for(int r=1;r<=(2*N-i)/2;r++)
                    {
                        a[j][k]=m;
                        j--;
                        m++;
                    }
                    j++;
                    k++;
                }
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

#include<iostream>
using namespace std;
int main()
{
	int T=0;
	long long test=0,num=0,Num[10000]={0},Test[10000]={0};
	cin>>T;
	for(int k=0;k<T;k++)
	cin>>Num[k];
	for(int i=0;i<T;i++)
	{
		num=Num[i];
		while(num!=1)
		{
			if(num%2==0)
			num=num/2;
			else if(num%2!=0)
			num=3*num+1;
			test++;
		}
		if(test>1000)
		Test[i]=-1;
		else
		Test[i]=test;
		test=0;
	}
	for(int j=0;j<T;j++)
	cout<<Test[j]<<endl;
	return 0;
}

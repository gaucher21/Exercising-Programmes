#include<iostream>
using namespace std;
int step=0;
void hanoi(int n,char A,char B,char C)
{
	if(n==1)
	{
		cout<<"Move From"<<" "<<A<<" "<<"To"<<" "<<C<<endl;
		step++;
	}
	else
	{
		hanoi(n-1,A,C,B);
		cout<<"Move From"<<" "<<A<<" "<<"To"<<" "<<C<<endl;
		step++;
		hanoi(n-1,B,A,C);
	}
}
int steps(int N)
{
	if(N==1)
	{
		return 1;
	}
	else
	{
		return steps(N-1)+1+steps(N-1);
	}
}
int main()
{
	int n;
	cin>>n;
	cout<<steps(n)<<endl;
	hanoi(n,'1','2','3');
	return 0;
}

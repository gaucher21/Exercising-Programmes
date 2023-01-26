#include<bits/stdc++.h>
using namespace std;
# define ll long long
int n,ia,ib,ic;
ll maxm,ans,pans;
int tri[4];
struct Point{
	ll x,y;
}p[500001];
ll cross(Point a,Point b,Point c){
	ll d=0;
	d=(a.x-c.x)*(b.y-c.y)-(b.x-c.x)*(a.y-c.y);
	if(d<0)d=d*-1;
	return d;
}
ll dis(Point a,Point b){
	return (a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y);
}
ll MAX(ll a,ll b,ll c){
	if(a>=b&&a>=c)return a;
	else if(b>=a&&b>=c)return b;
	else if(c>=a&&c>=b)return c;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++)cin>>p[i].x>>p[i].y;
	for(int i=0;i<n;i++){
		ia=i%n,ib=(i+1)%n;
		tri[1]=ia,tri[2]=ib,ic=tri[3];
		for(int j=ic;j<ic+n;j++){
			if(j>=n)j%=n;
			if(j==ia||j==ib)continue;
			if(cross(p[ia],p[ib],p[j])>maxm){
				maxm=cross(p[ia],p[ib],p[j]);
				tri[1]=ia,tri[2]=ib,tri[3]=j;
			}
			else break;
		}
		maxm=0;
		pans=MAX(dis(p[tri[1]],p[tri[2]]),dis(p[tri[1]],p[tri[3]]),dis(p[tri[2]],p[tri[3]]));
		if(pans>ans)ans=pans;
		pans=0;
	}
	cout<<ans<<endl;
	return 0;
}

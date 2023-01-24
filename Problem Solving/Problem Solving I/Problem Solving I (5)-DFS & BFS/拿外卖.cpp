#include<iostream>
#include<queue>
using namespace std;
char map[1001][1001];
int N,M,ans[1001][1001],visit[1001][1001];
struct location{
	char position;
	int x;
	int y;
};
queue<location>Q;
int main(){
	location start;
	cin>>N>>M;
	for(int i=1;i<=N;i++){
		for(int j=1;j<=M;j++){
			cin>>map[i][j];
			if(map[i][j]=='D'){
				start={'D',i,j};
				visit[i][j]=1;
				Q.push(start);
			}
		}
	}
	location now;
	int nx,ny;
	while(!Q.empty()){
		now=Q.front();
		Q.pop();
		if(now.position=='G'){
			cout<<ans[now.x][now.y]<<endl;
			break;
		}
		for(int i=-1;i<=1;i+=2){
			nx=now.x+i;ny=now.y;
			if(nx<=N&&nx>=1&&map[nx][ny]!='B'&&visit[nx][ny]==0){
				ans[nx][ny]=ans[now.x][now.y]+1;
				location tmp={map[nx][ny],nx,ny};
				Q.push(tmp);
				visit[nx][ny]=1;
			}
		}
		for(int i=-1;i<=1;i+=2){
			nx=now.x;ny=now.y+i;
			if(ny<=M&&ny>=1&&map[nx][ny]!='B'&&visit[nx][ny]==0){
				ans[nx][ny]=ans[now.x][now.y]+1;
				location tmp={map[nx][ny],nx,ny};
				Q.push(tmp);
				visit[nx][ny]=1;
			}
		}
	}
	return 0;
}

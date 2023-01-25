#include<iostream>
#include<queue>
using namespace std;
int board[501][501],visit[501][501];
struct location{
    int x;
    int y;
};
queue<location>q;
int n,m,x,y;
int main(){
    location start;
    cin>>n>>m>>x>>y;
    board[x][y]=0;
    start={x,y};
    visit[start.x][start.y]=1;
    q.push(start);
    location now;
    while(!q.empty()){
        location tmp;
        now=q.front();
        q.pop();
        for(int i=-2;i<=2;i+=4){
            for(int j=-1;j<=1;j+=2){
                tmp.x=now.x+i;tmp.y=now.y+j;
                if(1<=tmp.x&&tmp.x<=n&&1<=tmp.y&&tmp.y<=m&&visit[tmp.x][tmp.y]==0){
                    board[tmp.x][tmp.y]=board[now.x][now.y]+1;
                    visit[tmp.x][tmp.y]=1;
                    q.push(tmp);
                }
            }
        }
        for(int i=-1;i<=1;i+=2){
            for(int j=-2;j<=2;j+=4){
                tmp.x=now.x+i;tmp.y=now.y+j;
                if(1<=tmp.x&&tmp.x<=n&&1<=tmp.y&&tmp.y<=m&&visit[tmp.x][tmp.y]==0){
                    board[tmp.x][tmp.y]=board[now.x][now.y]+1;
                    visit[tmp.x][tmp.y]=1;
                    q.push(tmp);
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(board[i][j]==0&&(i!=start.x||j!=start.y))cout<<-1<<' ';
            else cout<<board[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}

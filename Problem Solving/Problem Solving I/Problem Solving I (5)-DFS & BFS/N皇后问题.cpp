#include<iostream>
using namespace std;
int n;
char board[999][999];
char Board[999][999];
int row[999],column[999],ascend[18],descend[18];
bool flag=false;
void dfs(int x){
    if(x>=n){
        flag=true;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                Board[i][j]=board[i][j];
            }
        }
    }
    if(row[x]==1)dfs(x+1);
    for(int i=0;i<n;i++){
        if(column[i]==0&&ascend[x+i]==0&&descend[x-i+100]==0){
            board[x][i]='Q';
            column[i]=1;ascend[x+i]=1;descend[x-i+100]=1;
            dfs(x+1);
            board[x][i]='.';
            column[i]=0;ascend[x+i]=0;descend[x-i+100]=0;
        }
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>board[i][j];
            if(board[i][j]=='Q'){
                row[i]=1;column[j]=1;ascend[i+j]=1;descend[i-j+100]=1;
            }
        }
    }
    dfs(0);
    if(!flag)cout<<"No"<<endl;
    else{
        cout<<"Yes"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<Board[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}

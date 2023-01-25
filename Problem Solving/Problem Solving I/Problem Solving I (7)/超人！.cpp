#include<iostream>
using namespace std;
int table[11][1000],times[50],allo[11],import[11],list[11][2],maxlist[11][2];
int N,M,K,tmp,maxm;
bool check_time(int a,int b){
    for(int i=table[a][2*b];i<table[a][2*b+1];i++){
        if(times[i]==1)return false;
    }
    return true;
}
bool check_done(){
    for(int i=1;i<=K;i++){
        if(allo[import[i]]==0)return false;
    }
    return true;
}
void consume_time(int a,int b){
    for(int i=table[a][2*b];i<table[a][2*b+1];i++)times[i]=1;
    return;
}
void erase_time(int a,int b){
    for(int i=table[a][2*b];i<table[a][2*b+1];i++)times[i]=0;
    return;
}
void dfs(int x){
    if(tmp>maxm){
        maxm=tmp;
        for(int i=1;i<=maxm;i++){
            maxlist[i][0]=list[i][0];
            maxlist[i][1]=list[i][1];
        }
    }
    if(!check_done()){
        for(int i=x;i<=K;i++){
            if(allo[import[i]]==1)continue;
            for(int j=1;j<=table[import[i]][0];j++){
                if(check_time(import[i],j)){
                    consume_time(import[i],j);
                    allo[import[i]]=1;
                    tmp=x;
                    list[x][0]=import[i];list[x][1]=j;
                    dfs(x+1);
                    list[x][0]=0;list[x][1]=0;
                    tmp=x;
                    allo[import[i]]=0;
                    erase_time(import[i],j);        
                }
                else continue;
            }
        }
    }
    else{
        for(int i=1;i<=M;i++){
            if(allo[i]==1)continue;
            else{
                for(int j=1;j<=table[i][0];j++){
                    if(check_time(i,j)){
                        consume_time(i,j);
                        allo[i]=1;
                        tmp=x;
                        list[x][0]=i;list[x][1]=j;
                        dfs(x+1);
                        list[x][0]=0;list[x][1]=0;
                        tmp=x;
                        allo[i]=0;
                        erase_time(i,j);
                    }
                    else continue;
                }
            }
        }
    }
    return;
}
int main(){
    cin>>N>>M>>K;
    for(int i=1;i<=M;i++){
        cin>>table[i][0];
        for(int j=1;j<=table[i][0];j++)cin>>table[i][2*j]>>table[i][2*j+1];
    }
    for(int i=1;i<=K;i++)cin>>import[i];
    dfs(1);
    if(maxm<K)cout<<-1<<endl;
    else{
        cout<<maxm<<endl;
        for(int i=1;i<=maxm;i++){
            cout<<maxlist[i][0]<<" "<<maxlist[i][1]<<endl;
        }
    }
    return 0;
}

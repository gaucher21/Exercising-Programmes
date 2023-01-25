#include<iostream>
using namespace std;
struct edge{
    int p1;
    int p2;
    int weight;
}Edge[20001];
int check[1001];
int N,M,ans,num=1,quant;
bool check_edge(edge e){
    if(check[e.p1]!=0&&check[e.p2]!=0&&(check[e.p1]==check[e.p2]))return false;
    else return true;
}
void submit(int a,int b){
    for(int i=1;i<=N;i++){
        if(check[i]!=0){
            if(check[i]==a)check[i]=b;
        }
    }
    return;
}
void put(edge e){
    ans+=e.weight;
    quant++;
    if(check[e.p1]==check[e.p2]){
        check[e.p1]=num;check[e.p2]=num;num++;
    }
    else if(check[e.p1]==0)check[e.p1]=check[e.p2];
    else if(check[e.p2]==0)check[e.p2]=check[e.p1];
    else{
        if(check[e.p1]>check[e.p2])submit(check[e.p2],check[e.p1]);
        else submit(check[e.p1],check[e.p2]);
    }
    return;
}
int main(){
    cin>>N>>M;
    for(int i=1;i<=M;i++){
        cin>>Edge[i].p1>>Edge[i].p2>>Edge[i].weight;
    }
    for(int i=1;i<=M;i++){
        for(int j=i+1;j<=M;j++){
            if(Edge[j].weight<Edge[i].weight){
                edge tmp;
                tmp=Edge[j];
                Edge[j]=Edge[i];
                Edge[i]=tmp;
            }
        }
    }
    for(int i=1;i<=M;i++){
        if(quant==N-1)break;
        if(check_edge(Edge[i]))put(Edge[i]);
        else continue;
    }
    cout<<ans<<endl;
    return 0;
}

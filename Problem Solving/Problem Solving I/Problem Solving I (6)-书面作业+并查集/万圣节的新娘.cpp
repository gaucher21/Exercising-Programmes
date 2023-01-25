#include<iostream>
#include<algorithm>
using namespace std;
int n,a,b,ans;
int seat[1000001];
void find(int x){
    if(seat[x]!=x){
        while(seat[x]!=x){
            swap(seat[x],seat[seat[x]]);
            ans++;
        }
    }
    return;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        seat[a]=b;
    }
    for(int i=1;i<=n;i++){
        find(i);
    }
    cout<<ans;
    return 0;
}

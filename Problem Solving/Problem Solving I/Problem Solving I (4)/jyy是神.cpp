#include<iostream>
using namespace std;
int main(){
    int N=0;
    long long num=0,sum=0,ans=0;
    cin>>N;
    char list[N]={'0'};
    for(int i=0;i<N;i++)cin>>list[i];
    for(int i=N-1;i>=0;i--){
        if(list[i]=='y')num++;
        if(list[i]=='j')sum+=num*(num-1)/2;
    }
    ans=sum%998244353;
    cout<<ans<<endl;
    return 0;
}

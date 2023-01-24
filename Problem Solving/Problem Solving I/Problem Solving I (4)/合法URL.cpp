#include<iostream>
#include<string>
using namespace std;
string URL;
char bnf[200];
int T,l;
bool lettercheck(int x){
    if((URL[x]>=65&&URL[x]<=90)||(URL[x]>=97&&URL[x]<=122))return true;
    return false;
}
bool digitcheck(int x){
    if(URL[x]>=48&&URL[x]<=57)return true;
    return false;
}
bool fragmentcheck(int x){
    if(lettercheck(x)||digitcheck(x))return fragmentcheck(x+1);
    if(x>=URL.size()&&(lettercheck(x-1)||digitcheck(x-1)))return true;
    return false;
}
bool querycheck(int x){
    if(lettercheck(x)||digitcheck(x))return querycheck(x+1);
    if(URL[x]=='='&&(lettercheck(x-1)||digitcheck(x-1))){
        if(lettercheck(x+1)||digitcheck(x+1))return querycheck(x+1);
    }
    if(URL[x]=='&'&&(lettercheck(x-1)||digitcheck(x-1))){
        if(lettercheck(x+1)||digitcheck(x+1))return querycheck(x+1);
    }
    if(!lettercheck(x)&&!digitcheck(x)){
        if(URL[x]=='#')return fragmentcheck(x+1);
    }
    if(x>=URL.size()&&(lettercheck(x-1)||digitcheck(x-1)))return true;
    return false;
}
bool pathcheck(int x){
    if(URL[x]=='/')return pathcheck(x+1);
    if(lettercheck(x)||digitcheck(x))return pathcheck(x+1);
    if(!lettercheck(x)&&!digitcheck(x)&&URL[x]!='/'){
        if(URL[x]=='?')return querycheck(x+1);
        if(URL[x]=='#')return fragmentcheck(x+1);
    }
    if(x>=URL.size())return true;
    return false;
}
bool portcheck(int x){
    if(digitcheck(x))return portcheck(x+1);
    if(!digitcheck(x)&&digitcheck(x-1)){
        if(URL[x]=='/')return pathcheck(x+1);
        if(URL[x]=='?')return querycheck(x+1);
        if(URL[x]=='#')return fragmentcheck(x+1);
    }
    if(x>=URL.size()&&digitcheck[x-1])return true;
    return false;
}
bool hostnamecheck(int x){
    if(lettercheck(x)||digitcheck(x))return hostnamecheck(x+1);
    if(!lettercheck(x)&&!digitcheck(x)&&(lettercheck(x-1)||digitcheck(x-1))){
        if(URL[x]=='.')return hostnamecheck(x+1);
        if(URL[x]==':')return portcheck(x+1);
        if(URL[x]=='/')return pathcheck(x+1);
        if(URL[x]=='?')return querycheck(x+1);
        if(URL[x]=='#')return fragmentcheck(x+1);
    }
    if(x>=URL.size()&&(lettercheck(x-1)||digitcheck(x-1)))return true;
    return false;
}
bool Protocolcheck(int x){
    if(lettercheck(x))return Protocolcheck(x+1);
    if(!lettercheck(x)&&lettercheck(x-1)){
        if(URL[x]==':'&&URL[x+1]=='/'&&URL[x+2]=='/')return hostnamecheck(x+3);
    }
    if(x>=URL.size())return false;
    return false;
}
bool BNFcheck(int x){
    if(Protocolcheck(x))return true;
    if(hostnamecheck(x))return true;
    return false;
}
int main(){
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>l;
        cin>>URL;
        if(BNFcheck(0))cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}

#include<iostream>
#include<string>
using namespace std;
string R,S;
char alphabetmatch[50][26];
char symbol[50];
int n;
bool comparison(int x,int y){
    for(int i=0;i<26&&alphabetmatch[x][i]!='\0';i++){
        if(alphabetmatch[x][i]==S[y])return true;
    }
    return false;
}
bool checkfull(int x){
    for(int i=0;i<26;i++)if(alphabetmatch[x][i]=='\0')return false;
    return true;
}
bool checkline(int x){
    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            if(alphabetmatch[x][j]==alphabetmatch[x+1][i]&&alphabetmatch[x][j]!='\0'&&alphabetmatch[x+1][i]!='\0')return true;
        }
    }
    return false;
}
bool traversal(int r,int s){
    if(s>=S.size()&&r>n-1)return true;
    if(symbol[r]&&traversal(r+1,s))return true;
    if(comparison(r,s)){
        if(symbol[r]=='\0'||symbol[r]=='?'){
            return traversal(r+1,s+1);
        }
        else if(symbol[r]=='*'){
            return traversal(r,s+1);
        }
    }
    if(symbol[r]=='?'){
        return traversal(r+1,s);
    }
    if(symbol[r]=='*'){
        return traversal(r+1,s);
    }
    return false;
}
int main(){
    cin>>R;
    cin>>S;
    for(int i=0;i<R.size();i++){
        if(R[i]=='.'){
            for(int k=0;k<26;k++){
                alphabetmatch[n][k]=97+k;
            }
            n++;
        }
        else if(R[i]=='['){
            int j=0;
            i++;
            while(R[i]!=']'){
                alphabetmatch[n][j]=R[i];
                j++;
                i++;
            }
            n++;
        }
        else if(R[i]=='?'){
            symbol[n-1]=R[i];
        }
        else if(R[i]=='+'){
            for(int k=0;k<26;k++){
                alphabetmatch[n][k]=alphabetmatch[n-1][k];
            }
            symbol[n]='*';
            n++;
        }
        else if(R[i]=='*'){
                symbol[n-1]=R[i];
            }
        else{
            alphabetmatch[n][0]=R[i];
            n++;
        }
    }
    if(traversal(0,0))cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}

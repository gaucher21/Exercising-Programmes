#include<iostream>
#include<string>
using namespace std;
string s,strf,manip,strb,tmp,ans;
string sign="[";
int cnt,endtop,start,meet,uni,digit=1;
inline string decode(string s){
    if(s.find(sign)==-1){
        return s;
    }
    else{
        for(int i=s.size();(int)i>=0;i--){
            if(s[i]=='['){
                start=i;
                meet=1;uni=0;
                for(int j=start+1;(unsigned)j<s.length();j++){
                    if(s[j]=='[')meet++;
                    if(s[j]==']')uni++;
                    if(uni==meet&&uni!=0){
                        endtop=j;
                        break;
                    }
                }
                digit=1;
                if('0'<=s[i+2]&&s[i+2]<='9'){                 
                    digit=2;
                    cnt=10*(s[i+1]-48)+(s[i+2]-48);
                }
                else cnt=s[i+1]-48;
                strf=s.substr(0,i);
                manip=s.substr(i+digit+1,endtop-start-digit-1);
                strb=s.substr(endtop+1,s.length()-endtop-1);
                tmp=manip;
                for(int i=1;i<cnt;i++){
                    manip+=tmp;
                }
                break;
            }
        }
        return decode(strf+manip+strb);
    }
}
int main(){
    cin>>s;
    ans=decode(s);
    cout<<ans<<endl;
    return 0;
}

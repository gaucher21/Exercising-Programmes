#include<iostream>
using namespace std;
int dxyb[4][4],zb[4][4],dxybv[4][4],dxybd[4][4],zbd[4][4],dxyp[10],zp[10],zl[10],dxyc[10],step[10],ans[10],dxyB[4][4],zB[4][4],DXY,Z;
int sign;
bool flag=false;
bool CheckEmpty(int x){
	for(int i=1;i<=3;i++){
		if(dxyb[x][i]==0)
		return true;
	}
	return false;
}
void Putz(int x,int l,int n){
	for(int i=1;i<=3;i++){
		if(zb[l][i]==0){
			zb[l][i]=x;
			return;
		}
	}
}
void Destroydxy(int x,int l,int d){
	for(int i=1;i<=3;i++){
		if(dxyb[l][i]==x&&dxybd[l][i]==0)
		dxybd[l][i]=d;
	}
}
void Putdxy(int x,int l,int n){
	for(int i=1;i<=3;i++){
		if(dxyb[l][i]==0&&dxybv[l][i]==0){
			dxyb[l][i]=x;
			dxybv[l][i]=n;
			return;
		}
	}
}
void Destroyz(int x,int l,int d){
	for(int i=1;i<=3;i++){
		if(zb[l][i]==x&&zbd[l][i]==0)
		zbd[l][i]=d;
	}
}
void Recoverz(int l,int d){
	for(int i=1;i<=3;i++){
		if(zbd[l][i]==d)
		zbd[l][i]=0;
	}
}
void Eliminatedxy(int l,int n){
	for(int i=3;i>=1;i--){
		if(dxybd[l][i]==0&&dxybv[l][i]==n){
			dxyb[l][i]=0;
			dxybv[l][i]=0;
			return;
		}
	}
}
void Recoverdxy(int l,int d){
	for(int i=1;i<=3;i++){
		if(dxybd[l][i]==d)
		dxybd[l][i]=0;
	}
}
void Eliminatez(int l,int n){
	for(int i=3;i>=1;i--){
		if(zbd[l][i]==0){
			zb[l][l]=0;
			return;
		}
	}
}
void CountBonus(){
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			dxyB[i][j]=dxyb[i][j];
		}
	}
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			zB[i][j]=zb[i][j];
		}
	}
	for(int i=1;i<=3;i++){
		if(dxyB[i][1]==dxyB[i][2]&&dxyB[i][1]==dxyB[i][3]){
			int k=0;
			for(int j=1;j<=3;j++){
				if(dxybd[i][j]==0)
				k++;
			}
			if(k==3){
				dxyB[i][1]=dxyB[i][1]*3;
				dxyB[i][2]=dxyB[i][2]*3;
				dxyB[i][3]=dxyB[i][3]*3;
			}
			if(k==2){
				dxyB[i][1]=dxyB[i][1]*2;
				dxyB[i][2]=dxyB[i][2]*2;
				dxyB[i][3]=dxyB[i][3]*2;
			}
		}
		if(dxyB[i][1]==dxyB[i][2]&&dxyB[i][1]!=dxyB[i][3]&&dxybd[i][1]==0&&dxybd[i][2]==0){
			dxyB[i][1]=dxyB[i][1]*2;
			dxyB[i][2]=dxyB[i][2]*2;
		}
		if(dxyB[i][2]==dxyB[i][3]&&dxyB[i][2]!=dxyB[i][1]&&dxybd[i][2]==0&&dxybd[i][3]==0){
			dxyB[i][2]=dxyB[i][2]*2;
			dxyB[i][3]=dxyB[i][3]*2;
		}
		if(dxyB[i][1]==dxyB[i][3]&&dxyB[i][1]!=dxyB[i][2]&&dxybd[i][1]==0&&dxybd[i][3]==0){
			dxyB[i][1]=dxyB[i][1]*2;
			dxyB[i][3]=dxyB[i][3]*2;
		}
	}
	for(int i=1;i<=3;i++){
		if(zB[i][1]==zB[i][2]&&zB[i][1]==zB[i][3]){
			int k=0;
			for(int j=1;j<=3;j++){
				if(zbd[i][j]==0)
				k++;
			}
			if(k==3){
				zB[i][1]=zB[i][1]*3;
				zB[i][2]=zB[i][2]*3;
				zB[i][3]=zB[i][3]*3;
			}
			if(k==2){
				zB[i][1]=zB[i][1]*2;
				zB[i][2]=zB[i][2]*2;
				zB[i][3]=zB[i][3]*2;
			}
		}
		if(zB[i][1]==zB[i][2]&&zB[i][1]!=zB[i][3]&&zbd[i][1]==0&&zbd[i][2]==0){
			zB[i][1]=zB[i][1]*2;
			zB[i][2]=zB[i][2]*2;
		}
		if(zB[i][2]==zB[i][3]&&zB[i][2]!=zB[i][1]&&zbd[i][2]==0&&zbd[i][3]==0){
			zB[i][2]=zB[i][2]*2;
			zB[i][3]=zB[i][3]*2;
		}
		if(zB[i][1]==zB[i][3]&&zB[i][1]!=zB[i][2]&&zbd[i][1]==0&&zbd[i][3]==0){
			zB[i][1]=zB[i][1]*2;
			zB[i][3]=zB[i][3]*2;
		}
	}
}
bool CheckConsequence(){
	DXY=0;
	Z=0;
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			if(dxybd[i][j]==0){
				DXY=DXY+dxyB[i][j];
			}
		}
	}
	for(int i=1;i<=3;i++){
		for(int j=1;j<=3;j++){
			if(zbd[i][j]==0)
			Z=Z+zB[i][j];
		}
	}
	return DXY>Z;
}
void dfs(int x){
	if(x>9){
		sign++;
		//count the bonus
		CountBonus();
		if(CheckConsequence()){
			cout<<DXY<<" "<<Z<<endl;
			flag=true;
			for(int i=1;i<=9;i++)
			ans[i]=step[i];
		}
		return;
	}
	if(x%2!=0){//奇数轮 z先下 dxy后下 
		 if(dxyc[x]>0){
		 	if(!CheckEmpty(dxyc[x]))
		 	return;
		 	Putz(zp[x],zl[x],x);
		 	Destroydxy(zp[x],zl[x],x);
		 	Putdxy(dxyp[x],dxyc[x],x);
		 	step[x]=dxyc[x];
		 	Destroyz(dxyp[x],dxyc[x],x);
		 	dfs(x+1);
			Recoverz(dxyc[x],x);
			step[x]=0;
			Eliminatedxy(dxyc[x],x);
			Recoverdxy(zl[x],x);
			Eliminatez(zl[x],x);	
		 }
		 else if(dxyc[x]==0){
		 	for(int i=1;i<=3;i++){
		 		if(!CheckEmpty(i))
		 		continue;
		 		else{
		 			Putz(zp[x],zl[x],x);
		 			Destroydxy(zp[x],zl[x],x);
		 			Putdxy(dxyp[x],i,x);
		 			step[x]=i;
		 			Destroyz(dxyp[x],i,x);
		 			dfs(x+1);
		 			Recoverz(i,x);
		 			step[x]=0;
		 			Eliminatedxy(i,x);
		 			Recoverdxy(zl[x],x);
		 			Eliminatez(zl[x],x);
		 		}
			 }
		 }
		 else if(dxyc[x]<0){
		 	for(int i=1;i<=3;i++){
		 		if(!CheckEmpty(i)||i==dxyc[x]*-1)
		 		continue;
		 		Putz(zp[x],zl[x],x);
		 		Destroydxy(zp[x],zl[x],x);
		 		Putdxy(dxyp[x],i,x);
		 		step[x]=i;
		 		Destroyz(dxyp[x],i,x);
		 		dfs(x+1);
		 		Recoverz(i,x);
		 		step[x]=0;
		 		Eliminatedxy(i,x);
		 		Recoverdxy(zl[x],x);
		 		Eliminatez(zl[x],x);
			 }
		 }
	}
	else if(x%2==0){
		if(dxyc[x]>0){
			if(!CheckEmpty(dxyc[x]))
			return;
			Putdxy(dxyp[x],dxyc[x],x);
			step[x]=dxyc[x];
			Destroyz(dxyp[x],dxyc[x],x);
			Putz(zp[x],zl[x],x);
			Destroydxy(zp[x],zl[x],x);
			dfs(x+1);
			Recoverdxy(zl[x],x);
			Eliminatez(zl[x],x);
			Recoverz(dxyc[x],x);
			step[x]=0;
			Eliminatedxy(dxyc[x],x);
		}
		else if(dxyc[x]==0){
			for(int i=1;i<=3;i++){
				if(!CheckEmpty(i))
				continue;
				else{
					Putdxy(dxyp[x],i,x);
					step[x]=i;
					Destroyz(dxyp[x],i,x);
					Putz(zp[x],zl[x],x);
					Destroydxy(zp[x],zl[x],x);
					dfs(x+1);
					Recoverdxy(zl[x],x);
					Eliminatez(zl[x],x);
					Recoverz(i,x);
					step[x]=0;
					Eliminatedxy(i,x);
				}
			}
		}
		else if(dxyc[x]<0){
			for(int i=1;i<=3;i++){
				if(!CheckEmpty(i)||i==dxyc[x]*-1)
				continue;
				Putdxy(dxyp[x],i,x);
				step[x]=i;
				Destroyz(dxyp[x],i,x);
				Putz(zp[x],zl[x],x);
				Destroydxy(zp[x],zl[x],x);
				dfs(x+1);
				Recoverdxy(zl[x],x);
				Eliminatez(zl[x],x);
				Recoverz(i,x);
				step[x]=0;
				Eliminatedxy(i,x);
			}
		}
	}
}
int main(){
	for(int i=1;i<=9;i++)
	cin>>dxyp[i];
	for(int i=1;i<=9;i++)
	cin>>zp[i];
	for(int i=1;i<=9;i++)
	cin>>zl[i];
	for(int i=1;i<=9;i++)
	cin>>dxyc[i];
	dfs(1);
	if(flag){
		cout<<"Yes"<<endl;
		for(int i=1;i<=9;i++)
		cout<<ans[i]<<" ";
		cout<<endl;
	}
	else cout<<"No"<<endl;
	return 0;
}

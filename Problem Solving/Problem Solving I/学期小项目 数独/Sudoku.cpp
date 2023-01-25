#include<iostream>
#include<windows.h>
#include<stdlib.h> 
using namespace std;
int board[82],Board[82],black[82],column[82][10],row[82][10],block[82][10];
int ans_num,branch,Column,Row,Block;
bool leaf=true;
void SetColorAndBackground(int ForgC,int BackC){
	WORD wColor=((BackC & 0x0F)<<4)+(ForgC & 0x0F);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),wColor);
}
void dfs_sudoku(int x){
	leaf=true;
	if(ans_num>1){//如果填入的“数独”有多个解，则它并不是数独 
		SetColorAndBackground(1,15);
		cout<<endl;
		cout<<"It isn't a standard sudoku!"<<endl;
		SetColorAndBackground(0,15);
		system("pause");
		exit(0);
	}
	if(x>81){//所有的空格均已填完，记录这个解 
		for(int i=1;i<=81;i++){
			Board[i]=board[i];
		}
		ans_num++;
		return;
	}
 	if(board[x]!=0){//该格是数独给出的空，不是待填空格 
		leaf=false;
		dfs_sudoku(x+1);
	}
	else{//用dfs遍历待填空格的所有可能填法，寻找是否有解 
		Column=(x-1)%9+1;Row=(x-1)/9+1;Block=((Column-1)/3+1)+(Row-1)/3*3;
		for(int i=1;i<=9;i++){
			if(column[Column][i]==0&&row[Row][i]==0&&block[Block][i]==0){
				leaf=false;
				board[x]=i;column[Column][i]=1;row[Row][i]=1;block[Block][i]=1;
				dfs_sudoku(x+1);
				Column=(x-1)%9+1;Row=(x-1)/9+1;Block=((Column-1)/3+1)+(Row-1)/3*3;
				board[x]=0;column[Column][i]=0;row[Row][i]=0;block[Block][i]=0;
				leaf=false;
			}
		}
	}
	if(leaf)branch++;//如果找到game tree的一个leaf，则填入数独可能的分支情况增加一，最终通过填入数独的可能分支情况数量来简要估计其难度 
	return;
}
int main(){
	system("color F1");
	SetColorAndBackground(1,15);
	cout<<"Give me a sudoku!"<<endl;
	SetColorAndBackground(2,15);
	cout<<"  ";
	for(int i=1;i<=9;i++)cout<<i<<" ";
	cout<<endl;
	SetColorAndBackground(0,15);
	for(int i=1;i<82;i++){
		if((i-1)%9+1==1){
			SetColorAndBackground(2,15);
			cout<<(i-1)/9+1<<" ";
			SetColorAndBackground(0,15);
		}
		cin>>board[i];
		if(board[i]!=0){
			Column=(i-1)%9+1;Row=(i-1)/9+1;Block=((Column-1)/3+1)+(Row-1)/3*3;
			column[Column][board[i]]=1;row[Row][board[i]]=1;block[Block][board[i]]=1;black[i]=1;
		}
	}
	dfs_sudoku(1);
	if(ans_num==1){
		SetColorAndBackground(1,15);
		cout<<endl;
		cout<<"The solution is:"<<endl;
		SetColorAndBackground(2,15);
		cout<<"  ";
		for(int i=1;i<=9;i++)cout<<i<<" ";
		cout<<endl;
		for(int i=1;i<10;i++){
			SetColorAndBackground(2,15);
			cout<<(i-1)%9+1<<" ";
			SetColorAndBackground(4,15);
			for(int j=(i-1)*9+1;j<=i*9;j++){
				if(black[j]==1)
				SetColorAndBackground(0,15);
				cout<<Board[j]<<" ";
				SetColorAndBackground(4,15);
			}
			cout<<endl;
		}
		cout<<endl;
		SetColorAndBackground(1,15);
		if(branch>=30000)cout<<"Extremely hard"<<endl;
		else if(branch<30000 && branch>=20000)cout<<"Hard"<<endl;
		else if(branch<20000 && branch>=10000)cout<<"Normal"<<endl;
		else if(branch<10000 && branch>=1000)cout<<"Easy"<<endl;
		else if(branch<1000)cout<<"Extremely easy"<<endl;
	//	cout<<branch<<endl;
		SetColorAndBackground(0,15);
	}
	else if(ans_num==0){
		SetColorAndBackground(1,15);
		cout<<endl;
		cout<<"It has no solution!"<<endl;
		SetColorAndBackground(0,15);
	}
	system("pause");
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[505][505];
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
void inp(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
}
void bfs(int i,int j){
	queue<pair<int,int>> q;
	q.push({i,j});
	a[i][j]='.';
	while(!q.empty()){
		pair<int,int> x=q.front(); q.pop();
		for(int k=0;k<8;k++){
			int i1=x.first+dx[k];
			int j1=x.second+dy[k];
			if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]=='W'){
				q.push({i1,j1});
				a[i1][j1]='.';
			}
		}
	}
}
int main(){
	inp();
	int dem=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]=='W'){
				bfs(i,j);
				dem++;
			}
		}
	}
	cout<<dem<<endl;
}
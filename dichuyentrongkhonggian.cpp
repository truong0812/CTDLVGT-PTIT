#include<bits/stdc++.h>
using namespace std;
struct node{
	int h,x,y;
};
int h,n,m,s1,s2,s3;
int d[50][50][50];
char a[50][50][50];
int dx[6]={-1,0,0,1,0,0};
int dy[6]={0,-1,1,0,0,0};
int dz[6]={0,0,0,0,-1,1};
bool ok;
void inp(){
	cin>>h>>n>>m;  ok=true;
	for(int i=1;i<=h;i++){
		for(int j=1;j<=n;j++){
			for(int l=1;l<=m;l++){
				cin>>a[i][j][l];
				if(a[i][j][l]=='S'){
					s1=i; s2=j; s3=l;
				}
			}
		}
	}
	memset(d,0,sizeof(d));
}
bool check(int h1,int i1,int j1){
	if(h1>=1 && h1<=h && i1>=1 && i1<=n && j1>=1 && j1<=m && a[h1][i1][j1]!='#'){
		return true;
	}
	return false;
}
void bfs(int i,int j,int l){
	queue<node> q;
	q.push({i,j,l});
	a[i][j][l]='#';
	while(!q.empty()){
		node u=q.front(); q.pop();
		int z=u.h, x=u.x, y=u.y;
		for(int k=0;k<6;k++){
			int h1=z+dz[k];
			int i1=x+dx[k];
			int j1=y+dy[k];
			if(check(h1,i1,j1)){
				q.push({h1,i1,j1});
				d[h1][i1][j1]=d[z][x][y]+1;
				if(a[h1][i1][j1]=='E'){
					cout<<d[h1][i1][j1]<<endl;
					ok=false;
					return;
				}
				a[h1][i1][j1]='#';
			}
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		bfs(s1,s2,s3);
		if(ok) cout<<-1<<endl;
	}
} 
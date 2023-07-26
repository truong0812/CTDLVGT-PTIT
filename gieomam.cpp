#include<bits/stdc++.h>
using namespace std;
int n,m,a[505][505];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
bool used[505][505];
void inp(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
}
bool check(){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]==1) return true;
		}
	}
	return false;
}
void solve(){
	int cnt=0;
	while(1){
		bool ok=false;
		memset(used,false,sizeof(used));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				if(used[i][j]==false){
					if(a[i][j]==2){
						for(int k=0;k<4;k++){
							int i1=i+dx[k];
							int j1=j+dy[k];
							if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]==1){
								a[i1][j1]=2;
								used[i1][j1]=true;
								ok=true;
							}
						}
					}
				}
			}
		}
		if(!ok) break;
		cnt++; 
	}
	if(check()) cout<<-1<<endl;
	else cout<<cnt<<endl;
}
int main(){
	int t; cin>>t; 
	while(t--){
		inp();
		solve();
	}
}
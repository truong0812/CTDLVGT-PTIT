#include<bits/stdc++.h>
using namespace std;
typedef pair<int,pair<int,int>> pii;
typedef pair<int,int> pi;
int n,m,inf=1e9;
int a[505][505],d[505][505];
int dx[4]={-1,0,0,1};
int dy[4]={0,-1,1,0};
void inp(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
			d[i][j]=inf;
		}
	}
}
void dijstra(){
	d[1][1]=a[1][1];
	priority_queue<pii,vector<pii>,greater<pii>> q;
	q.push({a[1][1],{1,1}});
	while(!q.empty()){
	    int len=q.top().first;
	    pair<int,int> x=q.top().second;
	    q.pop();
	    if(len>d[x.first][x.second]){
	    	continue;
		}
		for(int k=0;k<4;k++){
			int i1=x.first+dx[k];
			int j1=x.second+dy[k];
			if(i1>=1 && i1<=n && j1>=1 && j1<=m){
				if(d[x.first][x.second]+a[i1][j1]<d[i1][j1]){
					d[i1][j1]=d[x.first][x.second]+a[i1][j1];
					q.push({d[i1][j1],{i1,j1}});
				}
			}
		}
	}
	cout<<d[n][m]<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		dijstra();
	}
}
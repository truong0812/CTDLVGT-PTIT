#include<bits/stdc++.h>
using namespace std;
int n,m,res;
vector<int> v[1001];
bool used[505][505];
void inp(){
	cin>>n>>m; res=0;
	for(int i=0;i<m;i++){
		int x,y; cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	memset(used,false,sizeof(used));
}
void dfs(int u,int cnt){
	for(auto x:v[u]){
		if(used[x][u]==false && used[u][x]==false){
			used[x][u]=used[u][x]=true;
			dfs(x,cnt+1);
			used[x][u]=used[u][x]=false;
		}
	}
	res=max(cnt,res);
}
int main(){
	int t; cin>>t; 
	while(t--){
		inp();
		for(int i=0;i<n;i++){
			dfs(i,0);
		}
		cout<<res<<endl;
		for(int i=0;i<n;i++){
			v[i].clear();
		}
	}
}
#include<bits/stdc++.h>
using namespace std;
int n,m,s,e,parent[1001];
bool used[1001];
vector<int> v[1001];
void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
	    int x,y; cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(int i=1;i<=n;i++){
		if(v[i].size()>0) sort(v[i].begin(),v[i].end());
	}
	memset(used,false,sizeof(used));
	memset(parent,0,sizeof(parent));
}
bool dfs(int i,int u){
	used[i]=true;
	for(auto x:v[i]){
		if(used[x]==false){
			parent[x]=i;
			if(dfs(x,i)) return true;	
		}
		else if(x!=u && x==1){
			s=x; e=i;
			return true;
		}	
	}
	return false;
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		if(dfs(1,0)){
			vector<int> path;
			while(s!=e){
		    	path.push_back(e);
				e=parent[e];
			}
			path.push_back(s);
			reverse(path.begin(),path.end());
			for(auto x:path){
				cout<<x<<" ";
			}
			cout<<1<<endl;
		}
		else cout<<"NO"<<endl;
		for(int i=1;i<=n;i++){
			v[i].clear();
		}
	}
}
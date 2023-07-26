#include<bits/stdc++.h>
using namespace std;
int n,m,s;
vector<int> v[1001];
vector<pair<int,int>> edge;
bool used[1001];
void inp(){
	cin>>n>>m>>s;
	for(int i=0;i<m;i++){
		int x,y; cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	memset(used,false,sizeof(used));
}
void dfs(int i){
	used[i]=true;
	for(auto x:v[i]){
		if(used[x]==false){
			edge.push_back({i,x});
			dfs(x);
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		dfs(s);
		if(edge.size()==n-1){
			for(auto x:edge){
				cout<<x.first<<" "<<x.second<<endl;
			}
		}
		else{
			cout<<-1<<endl;
		}
		for(int i=1;i<=n;i++){
			v[i].clear();
		}
		edge.clear();
	}
}
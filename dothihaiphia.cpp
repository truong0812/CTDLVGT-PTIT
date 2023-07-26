#include<bits/stdc++.h>
using namespace std;
int n,m,color[1001];
vector<int> v[1001];
void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y; cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	memset(color,-1,sizeof(color));
}
bool bfs(int i){
	queue<int> q;
	q.push(i);
	color[i]=0;
	while(!q.empty()){
		int u=q.front(); q.pop();
		for(auto x:v[u]){
			if(color[x]==-1){
				color[x]=1-color[u];
				q.push(x);
			}
			else if(color[x]==color[u]) return false;
		}
	}
	return true;
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		bool ok=true;
		for(int i=1;i<=n;i++){
			if(color[i]==-1){
				if(bfs(i)==false){
					ok=false;
					break;
				}
			}
		}
		if(ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		for(int i=1;i<=n;i++){
			v[i].clear();
		}
	}
}
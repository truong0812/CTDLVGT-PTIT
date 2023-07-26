#include<bits/stdc++.h>
using namespace std;
int n,d[1001];
vector<int> v[1001];
bool used[1001];
void inp(){
	cin>>n;
	for(int i=0;i<n-1;i++){
		int x,y; cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
}
void bfs(int i){
	queue<int> q;
	q.push(i);
	used[i]=true;
	while(!q.empty()){
		int u=q.front(); q.pop();
		for(auto x:v[u]){
			if(used[x]==false){
				q.push(x);
				used[x]=true;
				d[x]=d[u]+1;
			}
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		int q; cin>>q;
		for(int i=0;i<q;i++){
			memset(used,false,sizeof(used));
			memset(d,0,sizeof(d));
			int x,y; cin>>x>>y;
			bfs(x);
			cout<<d[y]<<endl;
		}
		for(int i=1;i<=n;i++){
			v[i].clear();
		}
	}
}
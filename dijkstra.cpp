#include<bits/stdc++.h>
using namespace std;
int n,m,s,d[1001];
vector<pair<int,int>> v[1001];
bool used[1001];
void inp(){
	cin>>n>>m>>s;
	for(int i=0;i<m;i++){
		int x,y,z; cin>>x>>y>>z;
		v[x].push_back({y,z});
		v[y].push_back({x,z});
	}
	for(int i=1;i<=n;i++){
		d[i]=1e9;
	}
	memset(used,false,sizeof(used));
}

void dijkstra(int s){
	d[s]=0;
	for(int i=1;i<=n;i++){
		int u=-1;
		for(int j=1;j<=n;j++){
			if(used[j]==false && (u==-1 || d[j]<d[u])){
				u=j;
			}
		}
		if(d[u]==1e9){
			break;
		}
		used[u]=true;
		for(auto edge:v[u]){
			int x=edge.first; 
			int len=edge.second;
			if(d[u]+len<d[x]){
				d[x]=d[u]+len;
			}
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		dijkstra(s);
		for(int i=1;i<=n;i++){
			cout<<d[i]<<" ";
		}
		cout<<endl;
		for(int i=1;i<=n;i++){
			v[i].clear();
		}
	}
}
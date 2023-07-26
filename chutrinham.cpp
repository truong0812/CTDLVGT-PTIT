#include<bits/stdc++.h>
using namespace std;
int n,m,res;
int inf=1e9;
int d[1001],parent[1001]={0};
struct edge{
	int a,b,w;
};
vector<edge> e;
void inp(){
	cin>>n>>m; res=0;
	e.push_back({0,0,0});
	for(int i=0;i<m;i++){
		int x,y,z; cin>>x>>y>>z;
		e.push_back({x,y,z});
	}
	for(int i=1;i<=n;i++){
		d[i]=inf;
	}
}
void bellman(int s){
	d[s]=0;
	int x;
	for(int i=1;i<=n;i++){
		int ok=false; x=-1;
		for(int j=1;j<=m;j++){
			if(d[e[j].a] < inf){
				if(d[e[j].a]+e[j].w < d[e[j].b]){
					d[e[j].b] = d[e[j].a]+e[j].w;
					x=e[j].b;
					ok=true;
				}
			}
		}
		if(ok==false) break;
	}
	if(x!=-1) res=1;
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		bellman(1);
		for(int i=2;i<=n;i++){
			if(d[i]==inf){
				bellman(i);
			}
		}
		if(res) cout<<1<<endl;
		else  cout<<0<<endl;
		e.clear();
	}
}


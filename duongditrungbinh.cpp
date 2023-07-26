#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v[1001];
bool a[1001];
int d[1001];
void inp(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int x,y; cin>>x>>y;
		v[x].push_back(y);
	}
}
void bfs(int s){
	queue<int> q;
	q.push(s);
	a[s]=true;
	while(!q.empty()){
		int u=q.front();
		q.pop();
		for(auto x:v[u]){
			if(a[x]==false){
				q.push(x);
				d[x]=d[u]+1;
				a[x]=true;
			}
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		int res=0,dem=0;
		for(int i=1;i<=n;i++){
            memset(a,false,sizeof(a));
            memset(d,0,sizeof(d));
            bfs(i);
			for(int j=1;j<=n;j++){
				if(i==j) continue;
                if(d[j]>0) dem++;
                res+=d[j];
			}
		}
		cout<<fixed<<setprecision(2)<<1.0*res/(dem)<<endl;
		for(int i=1;i<=n;i++){
			v[i].clear();
		}
	}
}
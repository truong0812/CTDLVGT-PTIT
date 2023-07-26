#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> v[100001];
bool used[100001];
void inp(){
	cin>>n>>m;
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
			dfs(x);
		}
	}
}
int main(){
	int t; cin>>t; 
	while(t--){
		inp();
		int dem=0;
		for(int i=1;i<=n;i++){
			if(used[i]==false){
				dfs(i);
				dem++;
			}
		}
		if(dem==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		for(int i=1;i<=n;i++){
			v[i].clear();
		}
	}
}
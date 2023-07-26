#include<bits/stdc++.h>
using namespace std;
int k,n,m;
int a[1001];
bool used[1001];
vector<int> v[1001];
map<int,int> mp;
void inp(){
	cin>>k>>n>>m;
	for(int i=1;i<=k;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		int x,y; cin>>x>>y;
		v[x].push_back(y);
	}
	memset(used,false,sizeof(used));
}
void dfs(int i){
	used[i]=true;
	mp[i]++;
	for(auto x:v[i]){
		if(used[x]==false){
			dfs(x);
		}
	}
}
int main(){
	inp();
	for(int i=1;i<=k;i++){
		memset(used,false,sizeof(used));
		dfs(a[i]);
	}
	int dem=0;
	for(auto x:mp){
		if(x.second==k){
			dem++;
		}
	}
	cout<<dem<<endl;
}
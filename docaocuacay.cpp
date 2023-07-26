#include<bits/stdc++.h>
using namespace std;
const int MAX = 100005;
int n;
vector<int> v[MAX];
int height;

void inp(){
	for (int i=0; i<MAX; i++)
		v[i].clear();
	cin>>n; height=0;
	for(int i=0;i<n-1;i++){
		int x,y; cin>>x>>y;
		v[x].push_back(y);
	}
}
void dfs(int i, int cnt){
	if (v[i].size()==0){
		height=max(height,cnt);
		return;
	}
	for(auto x:v[i]){
		dfs(x,cnt+1);
	}
}


int main(){
	int t; cin>>t;
	while(t--){
		inp();
		dfs(1,0);
		cout << height << "\n";
	}
}
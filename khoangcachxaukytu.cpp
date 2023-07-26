#include<bits/stdc++.h>
using namespace std;
int n;
string a,b;
set<string> s;
void inp(){
	cin>>n>>a>>b;
	for(int i=0;i<n;i++){
		string x; cin>>x;
		if(x!=a){
			s.insert(x);
		}
	}
}
void solve(){
	queue<pair<string,int>> q;
	q.push({a,1});
	while(!q.empty()){
		string x=q.front().first;
		int cnt=q.front().second;
		q.pop();
		for(int i=0;i<x.length();i++){
			char c=x[i];
			for(int j='A';j<='Z';j++){
				x[i]=j;
				if(s.count(x)){
					q.push({x,cnt+1});
					s.erase(x);
				}
				if(b==x){
					cout<<cnt+1<<endl;
					return;
				}
			}
			x[i]=c;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		solve();
		s.clear();
	}
}
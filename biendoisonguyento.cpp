#include<bits/stdc++.h>
using namespace std;
int prime[10001];
void nto(){
	for(int i=1;i<=10000;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(int i=2;i<=100;i++){
		if(prime[i]){
			for(int j=i*i;j<=10000;j+=i){
				prime[j]=0;
			}
		}
	}
}
int d[10001]={0};
bool used[10001];
vector<int> u;
vector<int> v[10001];

int check(string a,string b){
	int dem=0;
	for(int i=0;i<a.size();i++){
		if(a[i]==b[i]) dem++;
	}
	if(dem==3) return 1;
	else return 0;
}
void data(){
	for(int i=1000;i<10000;i++){
		if(prime[i]){
			u.push_back(i);
		}
	}
	for(auto x:u){
		for(int i=0;i<u.size();i++){
			if(check(to_string(x),to_string(u[i]))){
				v[x].push_back(u[i]);
			}
		}
	}
}
void solve(int s,int e){
	memset(d,0,sizeof(d));
	memset(used,false,sizeof(used));
	queue<int> q;
	q.push(s);
	used[s]=true;
	while(!q.empty()){
		int u=q.front(); q.pop();
		for(auto x:v[u]){
			if(used[x]==false){
				q.push(x);
				used[x]=true;
				d[x]=d[u]+1;
				if(x==e){
					cout<<d[x]<<endl;
					return;
				}
			}
		}
	}
}
int main(){
	int t; cin>>t;
	nto();  data();
	while(t--){
		int a,b; cin>>a>>b;
		if(a==b) cout<<0<<endl;
		else solve(a,b);
	}
}
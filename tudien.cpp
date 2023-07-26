#include<bits/stdc++.h>
using namespace std;
int k,n,m;
char b[505][505];
string a[1001];
bool used[505][505];
vector<string> v;
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
void inp(){
	cin>>k>>n>>m;
	for(int i=1;i<=k;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>b[i][j];
		}
	}
	memset(used,false,sizeof(used));
}
void dfs(int i,int j,string res){
	for(int l=1;l<=k;l++){
		if(a[l]==res){
			v.push_back(res);
		}
	}
	for(int l=0;l<8;l++){
		int i1=i+dx[l];
		int j1=j+dy[l];
		if(used[i1][j1]==false &&i1>=1 && i1<=n && j1>=1 && j1<=m){
			used[i1][j1]=true;
			dfs(i1,j1,res+b[i1][j1]);
			used[i1][j1]=false;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				string res="";
				res+=b[i][j];
				used[i][j]=true;
				dfs(i,j,res);
				used[i][j]=false;
			}
		}
		if(v.size()==0){
			cout<<-1<<endl;
		}
		else{
			for(auto x:v){
			    cout<<x<<" ";
			}
			cout<<endl;
		}
		v.clear();
	}
}
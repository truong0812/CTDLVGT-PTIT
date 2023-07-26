#include<bits/stdc++.h>
using namespace std;
long long d[50][50];
void solve(){
	for(int i=0;i<30;i++){
		d[i][0]=1;
		d[0][i]=1;
	}
	for(int i=1;i<30;i++){
		for(int j=1;j<=30;j++){
			d[i][j]=d[i-1][j]+d[i][j-1];
		}
	}
}
int main(){
	int t; cin>>t;
	solve();
	while(t--){
		int n,m; cin>>n>>m;
		cout<<d[n][m]<<endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		int a[n+5],b[n+5];
		for(int i=1;i<=n;i++){
			cin>>a[i];
			b[i]=a[i]%k;
		}
		vector<vector<int>> d(n+5, vector<int>(k+5, INT_MIN));
		d[1][b[1]]=1;
		for(int i=2;i<=n;i++){
			for(int j=0;j<k;j++){
				d[i][j]=max(d[i-1][j],d[i-1][(j+k-b[i])%k]+1);
			}
		}
		cout<<d[n][0]<<endl;
	}
}
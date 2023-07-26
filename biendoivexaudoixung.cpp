#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string a; cin>>a;
		string b=a; 
		reverse(b.begin(),b.end());
		int n=a.length(),d[n+1][n+1];
		memset(d,0,sizeof(d));
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(a[i-1]==b[j-1]){
					d[i][j]=d[i-1][j-1]+1;
				}
				else{
					d[i][j]=max(d[i-1][j],d[i][j-1]);
				}
			}
		}
		cout<<n-d[n][n]<<endl;
	}
}
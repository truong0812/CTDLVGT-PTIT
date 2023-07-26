#include<bits/stdc++.h>
using namespace std;
int solve(int a[1000],int n){
	stack<int> st;
	int i=0;
	int res=0;
	while(i<n){
		if(st.empty() || a[i]>=a[st.top()]){
			st.push(i);
			i++;
		}
		else{
			int index=st.top(); st.pop();
			if(st.empty()){
				res=max(res,i*a[index]);
			}
			else{
				res=max(res,(i-st.top()-1)*a[index]);
			}
		}
	}
	while(!st.empty()){
		int index=st.top(); st.pop();
		if(st.empty()){
			res=max(res,i*a[index]);
		}
		else{
			res=max(res,(i-st.top()-1)*a[index]);
		}
	}
	return res;
}
int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		int b[n][m],c[m]={0};
		memset(b,0,sizeof(b));
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]==0) b[i][j]==0;
				else if(i!=0){
					b[i][j]=b[i-1][j]+1;
				}
				else b[i][j]=1;
			}
		}
		int res=0;
		for(int i=n-1;i>=0;i--){
			for(int j=0;j<m;j++){
				c[j]=b[i][j];
			}
			res=max(res,solve(c,m));
		}
		cout<<res<<endl;
	}
}
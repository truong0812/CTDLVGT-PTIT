#include<bits/stdc++.h>
using namespace std;
int n,k,s,a[1001];
bool ok;
void inp(){
	cin>>n>>k; s=0; ok=false;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s+=a[i];
	}
}
void ql(int sotap,int sum){
	if(sotap==k){
		ok=true;
	}
	if(ok==true) return;
	for(int i=1;i<=n;i++){
		if(sum+a[i]==s){
			ql(sotap+1,0);
		}
		if(sum+a[i]<s){
			ql(sotap,sum+a[i]);
		}
	}
}
void solve(){
	inp();
	if(s%k!=0){
		cout<<0<<endl;
		return;
	}
	s/=k;
	ql(0,0);
	if(ok) cout<<1<<endl;
	else cout<<0<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}
#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,K; cin>>n>>K;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	long long dem=0;
	for(int i=2;i<n;i++){
		for(int j=1;j<i;j++){
			auto it=lower_bound(a,a+j,(K-a[i]-a[j]));
			dem+=it-a;
		}
	}
	cout<<dem<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}
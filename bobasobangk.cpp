#include<bits/stdc++.h>
using namespace std;
void solve(){
	long long n,K; cin>>n>>K;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=2;i<n;i++){
		for(int j=1;j<i;j++){
			auto it=lower_bound(a,a+j-1,(K-a[i]-a[j]));
			if(*it==K-a[i]-a[j] ){
				cout<<"YES"<<endl;
				return;
	    	}
		}
	}
    cout<<"NO"<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		solve();
	}
}
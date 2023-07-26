#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long dem=0;
		for(int i=0;i<n-1;i++){
			auto x=lower_bound(a+i+1,a+n,k+a[i]);
			if(*x>=k+a[i]){
				dem+=(x-a)-i-1;
			}
		}
		cout<<dem<<endl;
	}
}

#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n,k; cin>>n>>k;
		int a[n+1];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		long long dem=0;
		for(int i=0;i<n-1;i++){
			auto it=lower_bound(a+i+1,a+n,k-a[i]);
			if(*it==k-a[i] ){
				auto tmp=upper_bound(a+i+1,a+n,k-a[i]);
			    dem+=(tmp-a)-(it-a); 
			}
		}
		cout<<dem<<endl;
	}
}
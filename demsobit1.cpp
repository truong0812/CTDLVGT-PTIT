#include<bits/stdc++.h>
using namespace std;
long long N,L,R;
long long dodai(long long n){
	if(n==1 || n==0) return 1;
	long long x=dodai(n/2);
	return 2*x+1;
}
long long dembit(long long n,long long l,long long r){
	if(L<l && R>=r) return n;
	if(R<l || L>r) return 0;
	long long mid=(l+r)/2;
	if(mid>=L && mid<=R){
		return dembit(n/2,l,mid-1) + dembit(n/2,mid+1,r) + n%2;
	}
	else return dembit(n/2,l,mid-1) + dembit(n/2,mid+1,r);
}
int main(){
	int t; cin>>t;
	while(t--){
	    cin>>N>>L>>R;
		cout<<dembit(N,1,dodai(N))<<endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
long long prime[10]={2,3,5,7,11,13,17,19,23,29};
int n;
long long ql(long long cnt,long long res,long long pos){
	if(cnt==n) return res;
	long long ans=1e18;
	for(int i=1;i<=n;i++){
		res*=prime[pos];
		if(ans<res|| cnt*(i+1)>n) break;
		ans=min(ans,ql(cnt*(i+1),res,pos+1));
	}
	return ans;
}
int main(){
	int t; cin>>t;
	while(t--){
	    cin>>n;
		cout<<ql(1,1,0)<<endl;
	}
}
#include<bits/stdc++.h>
using namespace std;
int n,ans,k,s,a[100];
void inp(){
	cin>>n>>k; s=0; ans=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		s+=a[i];
	}
}
void ql(int pos,int cnt,int sum){
	if(pos>n) return;
	for(int i=pos;i<=n;i++){
		sum+=a[i];
		if(sum==s){
			if(cnt==k && i==n){
				ans++;
			}
			ql(i+1,cnt+1,0);
		}
	}
}
int main(){
	inp();
	if(s%k!=0){
		cout<<0<<endl;
		return 0;
	}
	s/=k;
	ql(1,1,0);
	cout<<ans<<endl;
}
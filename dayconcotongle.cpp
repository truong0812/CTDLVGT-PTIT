#include<bits/stdc++.h>
using namespace std;
int n,a[1001],b[1001];
void inp(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	sort(b+1,b+n+1,greater<int> ());
}
void inkq(){
	int sum=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1){
			sum+=b[i];
		}
	}
	if(sum%2==1){
		for(int i=1;i<=n;i++){
			if(a[i]==1){
				cout<<b[i]<<" ";
			}
		}
		cout<<endl;
	}
}
void ql(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		if(i==n){
			inkq();
		}
		else ql(i+1);
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		ql(1);
	}
}
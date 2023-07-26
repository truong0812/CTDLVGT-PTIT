#include<bits/stdc++.h>
using namespace std;
int prime[10001];
void nto(){
	for(int i=1;i<=10000;i++){
		prime[i]=1;
	}
	prime[0]=prime[1]=0;
	for(int i=2;i<=100;i++){
		if(prime[i]){
			for(int j=i*i;j<=10000;j+=i){
				prime[j]=0;
			}
		}
	}
}
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
	if(prime[sum]){
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
	nto();
	int t; cin>>t;
	while(t--){
		inp();
		ql(1);
	}
}
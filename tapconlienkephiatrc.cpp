#include<bits/stdc++.h>
using namespace std;
int n,k,a[1001];
void inp(){
	cin>>n>>k;
	for(int i=1;i<=k;i++){
		cin>>a[i];
	}
}
void sinh(){
	int i=k;
	while( a[i]==a[i-1]+1){
		i--;
	}
	if(i==0){
		for(int j=1;j<=k;j++){
			cout<<n-k+j<<" ";
		}
		cout<<endl;
	}
	else{
		a[i]--;
		for(int j=i+1;j<=k;j++){
			a[j]=n-k+j;
		}
		for(int j=1;j<=k;j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		sinh();
	}
}
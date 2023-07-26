#include<bits/stdc++.h>
using namespace std;
int a[100],b[100],c[100],d[100],used[100]={0};
bool ok;
void inp(){
	ok=false;
	for(int i=1;i<=5;i++){
		cin>>a[i];
		d[i]=a[i];
	}
}
void tinh(){
	int sum=d[1];
	for(int i=1;i<=4;i++){
		if(b[i]==1)	sum+=d[i+1];
		if(b[i]==2) sum-=d[i+1];
		if(b[i]==3) sum*=d[i+1];
	}
	if(sum==23) ok=true;
}
void ql(int i){
	if(ok==true) return;
	for(int j=1;j<=3;j++){
		b[i]=j;
		if(i==4){
			tinh();
		}
		else ql(i+1);
	}
}
void inkq(){
	for(int i=1;i<=5;i++){
		d[i]=a[c[i]];
	}
	ql(1);
}
void hoanvi(int i){
	for(int j=1;j<=5;j++){
		if(used[j]==0){
			c[i]=j;
			used[j]=1;
			if(i==5){
				inkq();
			}
			else hoanvi(i+1);
			used[j]=0;
		}
	}
}
int main(){
	int t; cin>>t;
	while(t--){
		inp();
		ql(1);
		hoanvi(1);
		if(ok) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
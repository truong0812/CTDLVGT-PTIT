#include<bits/stdc++.h>
using namespace std;
int n,a[1001],b[1001],c[1001],d[1001];
vector<string> v;
void inp(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
}
void inkq(){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(a[i]==1){
			cnt++;
			d[cnt]=c[i];
		}
	}
	bool ok=true;
	for(int i=2;i<=cnt;i++){
		if(d[i]<d[i-1]){
			ok=false;
			break;
		}
	}
	if(ok){
		string res="";
		for(int i=1;i<=cnt;i++){
			res+=to_string(d[i])+" ";
		}
		v.push_back(res);
	}
}
void ql(int i){
	for(int j=0;j<=1;j++){
		a[i]=j;
		b[i]=b[i-1]+a[i];
		if(i==n){
			if(b[i]>1){
				inkq();
			}
		}
		else ql(i+1);
		b[i]-=a[i];
	}
}
int main(){
	inp();
	ql(1);
	sort(v.begin(),v.end());
	for(auto x:v){
		cout<<x<<endl;
	}
	v.clear();
}

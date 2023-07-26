#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	string s; cin>>s;
	int dem=0,x=0,t=0,d=0;
	for(int i=0;i<n;i++){
		if(s[i]=='X') x++;
		if(s[i]=='T') t++;
		if(s[i]=='D') d++;
	}
	for(int i=n-d;i<n;i++){
		if(s[i]!='D') dem++;
	}
	for(int i=0;i<x;i++){
		if(s[i]!='X') dem++;
	}
	int a=0,b=0;
	for(int i=0;i<x;i++){
		if(s[i]=='D') a++;
	}
	for(int i=n-d;i<n;i++){
		if(s[i]=='X') b++;
	}
	cout<<dem-min(a,b)<<endl;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		string a; getline(cin>>ws,a);
		int m; cin>>m;
		string b; getline(cin>>ws,b);
		if(a==b) cout<<1<<endl;
		else cout<<0<<endl;
	}
}
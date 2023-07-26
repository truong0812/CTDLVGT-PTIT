#include<bits/stdc++.h>
using namespace std;
int main(){
	string s; cin>>s;
	int t; cin>>t;
	while(t--){
		char c; cin>>c;
		if(c=='q'){
			int l,r; cin>>l>>r;
			string tmp=s;
			reverse(tmp.begin()+l-1,tmp.begin()+r);
			if(s==tmp) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else{
			int a; cin>>a;
			char b; cin>>b;
			s[a-1]=b;
		}
	}
}
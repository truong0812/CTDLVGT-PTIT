#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		set<int> s;
		for(int i=0;i<n;i++){
			cin>>a[i];
			s.insert(a[i]);
		}
		if(s.size()!=n){
			cout<<0<<endl;
		}
		else{
			int i=0;
			bool ok=true;
			for(auto x:s){
				if(x!=a[i]){
					cout<<0<<endl;
					ok=false;
					break;
				}
				i++;
			}
			if(ok) cout<<1<<endl;
		}
	}
}
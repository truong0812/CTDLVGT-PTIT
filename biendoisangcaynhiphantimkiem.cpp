#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		set<int> s;
		int n; cin>>n;
		for(int i=0;i<n;i++){
			int a,b; char c;
			cin>>a>>b>>c;
			s.insert(a);
			s.insert(b);
		}
		for(auto x:s){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
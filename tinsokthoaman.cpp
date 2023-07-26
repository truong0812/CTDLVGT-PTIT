#include<bits/stdc++.h>
using namespace std;
vector<int> v;
bool ok=true;
void solve(){
	queue<string> q;
	for(int i=1;i<=5;i++){
		q.push(to_string(i));
		v.push_back(i);
	}
	while(ok){
		string x=q.front(); q.pop();
		for(int i=0;i<=5;i++){
			string s=to_string(i);
			if(x.find(s)>5) {
				q.push(x+s);
				v.push_back(stoi(x+s));
				if(x+s=="54321") ok=false;
			}
		}
	}
}
int main(){
	int t; cin>>t; 
	solve();
	while(t--){
		int l,r; 
		cin>>l>>r;
		auto s=lower_bound(v.begin(),v.end(),l);
		auto e=upper_bound(v.begin(),v.end(),r);
		int res=e-s;
		cout<<res<<endl;
	}
}
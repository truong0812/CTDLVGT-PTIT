#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n];
		vector<pair<int,int>> v;
		for(int i=0;i<n;i++){
			cin>>a[i];
			v.push_back({a[i],i});
		}
		sort(v.begin(),v.end());
		int dem=0,x=0;
		vector<int> u;
		for(int i=0;i<n-1;i++){
			x=max(x,v[i].second);
			if(x==i){
				dem++;
				u.push_back(i+1);
			}
		}
		cout<<dem<<endl;
		for(auto x:u){
			cout<<x<<" ";
		}
		cout<<endl;
	}
}
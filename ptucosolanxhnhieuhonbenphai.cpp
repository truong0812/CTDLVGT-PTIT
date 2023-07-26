#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n],b[n];
		map<int,int> mp;
		for(int i=0;i<n;i++){
			cin>>a[i];
			mp[a[i]]++;
		}
		stack<int> st;
		b[n-1]=-1;
		st.push(n-1);
		for(int i=n-2;i>=0;i--){
			while(!st.empty() && mp[a[i]]>=mp[a[st.top()]]){
				st.pop();
			}
			if(st.empty()) b[i]=-1;
			else{
				b[i]=a[st.top()];
			}
			st.push(i);
		}
		for(int i=0;i<n;i++){
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}
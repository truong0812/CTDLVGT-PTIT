#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int a[n],b[n],c[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		stack<int> st1,st2;
		b[n-1]=-1; c[n-1]=-1;
		st1.push(n-1);
		for(int i=n-2;i>=0;i--){
			while(!st1.empty() && a[st1.top()]<=a[i]){
				st1.pop();
			}
			if(st1.empty()) b[i]=-1;
			else{
				b[i]=st1.top();
			}
			st1.push(i);
		}
		st2.push(n-1);
		for(int i=n-2;i>=0;i--){
			while(!st2.empty() && a[st2.top()]>=a[i]){
				st2.pop();
			}
			if(st2.empty()) c[i]=-1;
			else{
				c[i]=st2.top();
			}
			st2.push(i);
		}
		for(int i=0;i<n;i++){
			if(b[i]==-1 || c[b[i]]==-1) cout<<-1<<" ";
			else cout<<a[c[b[i]]]<<" ";
		}
		cout<<endl;
	}
}
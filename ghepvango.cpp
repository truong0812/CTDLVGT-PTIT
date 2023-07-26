#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long long a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		stack<long long> st;
		long long i=0, res=0;
		while(i<n){
			if(st.empty() || a[i]>=a[st.top()]){
				st.push(i);
				i++;
			}
			else{
				int index=st.top();
				st.pop();
				if(st.empty()){
					if(i>=a[index]) res=max(res,a[index]);
				}
				else {
					if((i-st.top()-1)>=a[index]) res=max(res,a[index]);
				}
			}
		}
		while(!st.empty()){
	     	int index=st.top();
			st.pop();
			if(st.empty()){
				if(i>=a[index]) res=max(res,a[index]);
			}
			else {
				if((i-st.top()-1)>=a[index]) res=max(res,a[index]);
			}
		}
		cout<<res<<endl;
	}
}
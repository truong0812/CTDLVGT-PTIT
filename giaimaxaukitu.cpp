#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		stack<char> st;
		for(int i=0;i<s.length();i++){
			if(s[i]==']'){
				string x;
				while(!st.empty() && st.top()!='['){
					x=st.top()+x; 
					st.pop();
				}
				st.pop();
				string number="";
				while(!st.empty() && st.top()>='0' && st.top()<='9'){
					number=st.top()+number; st.pop();
				}
				int n=1;
				string a="";
				if(number.size()) n=stoi(number);
				for(int i=0;i<n;i++){
					a+=x;
				}
				for(int i=0;i<a.length();i++){
					st.push(a[i]);
				}
			}
			else st.push(s[i]);
		}
		string res="";
		while(!st.empty()){
			res=st.top()+res;
			st.pop();
		}
		cout<<res<<" ";
		cout<<endl;
	}
}
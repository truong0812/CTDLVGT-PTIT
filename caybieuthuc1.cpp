#include<bits/stdc++.h>
using namespace std;
bool check(char x){
	if(x=='+' || x=='-' || x=='*' || x=='/' || x=='%' || x=='^'){
		return true;
	}
	return false;
}
void hangdoi(string s){
	stack<string> st;
	for(int i=0;i<s.length();i++){
		if(!check(s[i])){
			st.push(string(1,s[i]));
		}
		else{
			if(st.size()>=2){
				string a=st.top(); st.pop();
				string b=st.top(); st.pop();
				string x=b+s[i]+a;
				st.push(x);
			}
		}
	}
	cout<<st.top()<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		hangdoi(s);
	}
}
#include<bits/stdc++.h>
using namespace std;

string solve(string s)
{
    stack <char> stk;
    for(int i=0;i < s.size();i++)
    {
        if(s[i-1] == '+' || s[i-1] == '-')
        {
            if(i != 0) stk.push(s[i-1]);
        }
        if(!stk.empty() && s[i] == ')' ) stk.pop();
        if(!stk.empty() && stk.top() == '-')
        {
            if(s[i] == '+') s[i] = '-';
            else if(s[i] == '-') s[i] = '+';
        }
    }
    string res= "";
    for(int i=0;i < s.size();i++)
    {
        if(s[i] != '(' && s[i] != ')')
        {
            res = res + s[i];
        }
    }
    return res;
}

int main(){
	int t; cin>>t;
	while(t--){
		string a,b; cin>>a>>b;
		if(solve(a)==solve(b)){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
}
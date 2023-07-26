#include<bits/stdc++.h>
using namespace std;
int main() {
	string s; cin >> s;
	stack<char> st1,st2;
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '<') {
			if (st1.size()) {
				st2.push(st1.top());
				st1.pop();
			}
		}
		else if (s[i] == '>') {
			if (st2.size()) {
				st1.push(st2.top());
				st2.pop();
			}
		}
		else if (s[i] == '-') {
			if (st1.size())	st1.pop();
		}
		else st1.push(s[i]);
	}
	while (st1.size()) {
		st2.push(st1.top());
		st1.pop();
	}
	while (st2.size()) {
		cout << st2.top();
		st2.pop();
	}
}
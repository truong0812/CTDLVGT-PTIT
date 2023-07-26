#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
string dt;
set<string> res;
void DFS(int di, stack<char> st, string xau) {
	if (dt[di] == '(') {
		st.push('(');
		xau.push_back('(');
		if (di < dt.size() - 1)DFS(di + 1, st, xau);
		xau.pop_back();
		st.pop();
		if (di < dt.size() - 1)DFS(di + 1, st, xau);
		else if (di == dt.size() - 1 && st.size() == 0 && xau.size() > 1) res.insert(xau);
	}
	else if (dt[di] == ')') {
		if (st.size() > 0) {
			st.pop();
			xau.push_back(')');
			if (di < dt.size() - 1)DFS(di + 1, st, xau);
			else if (di == dt.size() - 1 && st.size() == 0 && xau.size() > 1) res.insert(xau);
			xau.pop_back();
			st.push('(');
			if (di < dt.size() - 1)DFS(di + 1, st, xau);
			else if (di == dt.size() - 1 && st.size() == 0 && xau.size() > 1) res.insert(xau);
		}
		else {
			if (di < dt.size() - 1)DFS(di + 1, st, xau);
			else if (di == dt.size() - 1 && st.size() == 0 && xau.size() > 1) res.insert(xau);
		}
	}
	else {
		xau.push_back(dt[di]);
		if (di < dt.size() - 1)DFS(di + 1, st, xau);
		else if (di == dt.size() - 1 && st.size() == 0 && xau.size() > 1) res.insert(xau);
		xau.pop_back();
	}
}
void thuchien() {
	cin >> dt;
	res.clear();
	stack<char> st1 = {};
	DFS(0, st1, "");
	if (res.size() <= 0) cout << "-1";
	else {
		int mx = -1;
		for (auto i : res) {
			int sz = i.size();
			mx = max(mx, sz);
		}
		for (auto i : res) {
			if (i.size() == mx) cout << i << " ";
		}
	}
	cout << endl;
}
int main() {
	int test;
	cin >> test;
	while (test--) thuchien();
	return 0;
}
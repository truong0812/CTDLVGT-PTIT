#include <bits/stdc++.h>
using namespace std;
string s;
vector<pair<int, int>> bracket;
int n;
int bin[15];
set<string> ans;
void Push()
{
    int len = s.size();
    vector<bool> exist(len, 1);
    for (int i = 0; i < n; i++)
    {
        if (bin[i])
            exist[bracket[i].first] = exist[bracket[i].second] = 0;
    }
    string tmp = "";
    for (int i = 0; i < len; i++)
    {
        if (exist[i])
            tmp += s[i];
    }
    if (tmp != s)
        ans.insert(tmp);
}
void Try(int k)
{
    if (k == n)
        return;
    for (int i = 0; i < 2; i++)
    {
        bin[k] = i;
        if (k == n - 1)
            Push();
        else
            Try(k + 1);
    }
}
int main()
{
    cin >> s;
    stack<int> stk;
    for (int i = 0; i < int(s.size()); i++)
    {
        if (s[i] == '(')
            stk.push(i);
        else if (s[i] == ')')
        {
            bracket.push_back({stk.top(), i});
            stk.pop();
        }
    }
    n = bracket.size();
    Try(0);
    for (auto x : ans)
        cout << x << "\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
string s;
int n;
vector<string> ans;
bool Check(string str)
{
    int n1 = stoi(str.substr(0, 2));
    int n2 = stoi(str.substr(5, 2));
    int ans;
    if (str[3] == '+')
        ans = n1 + n2;
    else if (str[3] == '-')
        ans = n1 - n2;
    string tmp = to_string(ans);
    string n3 = str.substr(10, 2);
    return (tmp == n3);
}
void Try(string str, int pos)
{
    if (pos == n){
        if (Check(str))
            ans.push_back(str);
        return;
    }
    if (str[pos] != '?')
    {
        Try(str, pos + 1);
        return;
    }
    if (pos == 3)
    {
        for (auto x : {'+', '-'})
        {
            str[pos] = x;
            Try(str, pos + 1);
        }
    }
    else if (pos == 0 || pos == 5 || pos == 10)
    {
        for (char c = '1'; c <= '9'; c++)
        {
            str[pos] = c;
            Try(str, pos + 1);
        }
    }
    else
    {
        for (char c = '0'; c <= '9'; c++)
        {
            str[pos] = c;
            Try(str, pos + 1);
        }
    }
}
void Solve()
{
    ans.clear();
    getline(cin, s);
    n = s.size();
    if (s[3] == '*' || s[3] == '/')
    {
        cout << "WRONG PROBLEM!\n";
        return;
    }
    Try(s, 0);
    if (ans.size() == 0)
        cout << "WRONG PROBLEM!\n";
    else
    {
        sort(ans.begin(), ans.end());
        cout << ans[0] << "\n";
    }
}
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        Solve();
    }
    return 0;
}
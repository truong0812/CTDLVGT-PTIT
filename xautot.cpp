#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n;
	string s;
	cin >> n >> s;
	vector<ll> a;
	ll cnt = 1;
	for (ll i = 1; i < n; i++)
	{
		if (s[i] == s[i - 1])
			cnt++;
		else
		{
			a.push_back(cnt);
			cnt = 1;
		}
	}
	a.push_back(cnt);
	ll ans = n * (n - 1) / 2;
	for (ll i = 1; i < int(a.size()); i++)
		ans -= (a[i] + a[i - 1] - 1);
	cout << ans;
	return 0;
}  
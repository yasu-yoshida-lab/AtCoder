#include <bits/stdc++.h>
#define rep(i, l, r) for (int i = l; i <= r; ++i)
using namespace std;
using ll = long long;

int main() {
	ll n, k;
	cin >> n >> k;

	vector<ll> a(n);
	rep(i, 0, n - 1) { cin >> a[i]; }
	vector<ll> s(n + 1); 
	rep(i, 0, n - 1) { s[i + 1] = s[i] + a[i]; }

	map<ll, ll> mp;
	ll ans = 0;

	rep(r, 1, n) {
		mp[s[r - 1]]++;
		ans += mp[s[r] - k];
	}

	cout << ans << endl;

	return 0;
}

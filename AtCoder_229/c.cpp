#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n, w;
	cin >> n >> w;

	vector<pair<ll, ll>> v(n);

	for (auto &x : v) { cin >> x.first >> x.second; }

	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());

	ll ans = 0;
	for (auto &x : v) { 
		ans += x.first * min(w, x.second);
		w -= min(w, x.second);
	}

	cout << ans << endl;

	return 0;
}

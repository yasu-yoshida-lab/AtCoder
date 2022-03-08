#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n; 
	cin >> n;

	vector<ll> t(n), k(n);
	vector<vector<ll>> a;
	vector<bool> used(n, false);

	a.resize(n);
	for (int i = 0; i < n; ++i) { 
		cin >> t[i] >> k[i];
		a[i].resize(k[i]);
		for (int j = 0; j < k[i]; ++j) { 
			ll x;
			cin >> x;
			a[i][j] = x - 1;
		}
	}

	ll ans = 0;
	used[n - 1] = true;
	for (int i = n - 1; i >= 0; --i) { 
		if (used[i]) { 
			ans += t[i];
			for (int j = 0; j < k[i]; ++j) { used[a[i][j]] = true; }
		}
	}

	cout << ans << endl;

	return 0;
}

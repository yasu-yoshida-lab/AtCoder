#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() { 
	ll n, k, x; cin >> n >> k >> x;
	vector<ll> a(n);
	for (auto & val : a) { cin >> val; }

	ll ans = 0;
	for (const auto val : a) { ans += val; }

	ll m = 0;
	for (int i = 0; i < n; ++i) { m += a[i] / x; }
	m = min(m, k);
	ans -= m * x;
	k -= m;

	for (int i = 0; i < n; ++i) { a[i] %= x; }
	sort(a.begin(), a.end());

	for (int i = n - 1; i >= 0; --i) { 
		if (k == 0) { break; }
		ans -= a[i];
		--k;
	}

	cout << ans << endl; 

}

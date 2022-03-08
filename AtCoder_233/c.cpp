#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
ll ans = 0;
ll n, x;
vector<vector<ll>> a;

void dfs(ll pos, ll seki) { 
	if (pos == n) { 
		if (seki == x) { ans++; }
		return;
	}
	for (auto val : a[pos]) {
		if (seki > x / val) { continue; }
		else { dfs(pos + 1, seki * val); }
	}
}

int main() { 
	cin >> n >> x;
	a.resize(n);

	rep(i, n) {
		ll l; 
		cin >> l; 
		a[i].resize(l);
		rep(j, l) { cin >> a[i][j]; }
	}

	dfs(0, 1);
	cout << ans << endl;

	return 0;
}

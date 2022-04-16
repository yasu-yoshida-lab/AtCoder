#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() { 
	int n; cin >> n;
	vector<pair<ll, ll>> que_1;
	vector<ll> que_2;
	while (n--) { 
		int q; cin >> q;
		if (q == 1) { 
			ll x; cin >> x;
			ll c; cin >> c;
			que_1.push_back(make_pair(x, c));
		}
		else { 
			ll c; cin >> c;
			que_2.push_back(c);
		}
	}

	int idx = 0;
	for (auto &c : que_2) { 
		ll ans = 0; 
		while (c) { 
			if (que_1[idx].second == 0) { idx++; } 
			else { 
				ll take = min(c, que_1[idx].second);
				ans += take * que_1[idx].first; 
				c -= take; 
				que_1[idx].second -= take;
			}
		}
		cout << ans << endl; 
	}
}

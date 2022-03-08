#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n;
	cin >> n;

	set<vector<ll>> se;
	for (ll i = 0; i < n; ++i) {
		ll l; 
		cin >> l;
		vector<ll> v(l);
		for (int j = 0; j < l; ++j) { 
			cin >> v[j];
		}
		se.insert(v);
	}

	cout << se.size() << endl;

	return 0;
}

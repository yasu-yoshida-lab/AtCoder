#include <bits/stdc++.h>
using namespace std;
using ll = long long;

constexpr size_t MAX = 2000000;

int main() 
{
	int n; cin >> n;
	vector<ll> v(MAX);

	for (int i = 0; i < n; ++i) { 
		int x; cin >> x; 
		v[x] += 1; 
		printf("v[%d] : %lld\n", x, v[x]);
	}

	ll ans = 0; 
	for (int q = 1; q <= MAX; ++q) { 
		for (int r = 1; q * r <= MAX; ++r) { 
			ans += (ll) v[q] * v[r] * v[q * r]; 
		}
	}

	cout << ans << endl; 

	return 0;
}

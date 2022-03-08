#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() { 
	ll n;
	cin >> n;

	vector<ll> a(n);
	for (auto & val : a) { cin >> val; }

	ll x;
	cin >> x;

	ll sumA = 0;
	for (auto val : a) { sumA += val; }
	ll p = x / sumA;
	ll sumB = p * sumA;
	ll ans = p * n;

	for (auto val : a) { 
		sumB += val;
		++ans;
		if (sumB > x) { 
			cout << ans << endl; 
			return 0;
		}
	}

	return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n; 
	cin >> n;

	ll ans = 0;
	for (ll a = 1; pow(a, 3.0) <= n; ++a) {
		for (ll b = a; a * pow(b, 2.0) <= n; ++b) { 
			ans += (n / a / b) - b + 1;
		}
	}

	cout << ans << endl;


	return 0;
}

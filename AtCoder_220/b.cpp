#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll solve(string s, ll k) { 
	ll ret = 0;
	float base = 0.0F;;
	for (ll i = (ll)s.size() - 1; i >= 0; --i) { 
		ret += (ll)(s[i] - '0') * pow(k, base);
		base++;
	}
	return ret;
}

int main() { 
	ll k;
	string a, b;
	cin >> k >> a >> b;

	ll A, B;
	A = solve(a, k);
	B = solve(b, k);

	cout << A * B << endl;

	return 0;
}

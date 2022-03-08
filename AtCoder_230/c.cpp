#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() { 
	ll n, a, b, p, q, r, s;
	cin >> n >> a >> b;
	cin >> p >> q >> r >> s;

	string str = "";
	vector<string> vec;
	for (ll i = 0; i < (s - r + 1); ++i) { str += '.'; }
	for (ll i = 0; i < (q - p + 1); ++i) { vec.push_back(str); }

	ll left = max(p - a, r - b);
	ll right = min(q - a, s - b);
	for (ll k = left; k <= right; ++k) { vec[a+k-p][b+k-r] = '#'; }

	left = max(p - a, b - s);
	right = min(q - a, b - r);
	for (ll k = left; k <= right; ++k) { vec[a+k-p][b-k-r] = '#'; }

	for (ll i = 0; i < (q - p + 1); ++i) { cout << vec[i] << endl; }
	return 0;
}

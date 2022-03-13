#include <bits/stdc++.h>
using namespace std;

int main() { 
	int n; cin >> n;

	vector<int> s(n), t(n); 
	for (auto & val : s) { cin >> val; }
	for (auto & val : t) { cin >> val; }

	vector<int> m(t); 
	for (int i = 0; i < n * 2; ++i) { m[(i + 1) % n] = min(m[(i + 1) % n], m[i % n] + s[i % n]); }

	for (auto ans : m) { cout << ans << endl; }

	return 0;
}

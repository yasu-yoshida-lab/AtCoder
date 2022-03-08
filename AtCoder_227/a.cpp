#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, a;
	cin >> n >> k >> a;

	map<int, int> mp;

	int idx = a;
	for (int j = 1; j <= k; ++j) { 
		mp[idx] = j;
		idx = (idx == n) ? 1 : idx + 1;
	}

	map<int, int> m;
	for (auto x : mp) { m[x.second] = x.first; }

	cout << m[k] << endl;

	return 0;
}

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
	vector<ll> a(n), b(n);
	for (auto & val : a) { cin >> val; }
	for (auto & val : b) { cin >> val; }

	int ans = 0; 
	for (int i = 0; i < n; ++i) { 
		if (a[i] == b[i]) { ans++; }
	}

	cout << ans << endl;

	ans = 0; 
	for (int i = 0; i < n; ++i) { 
		for (int j = 0; j < n; ++j) { 
			if (a[i] == b[j] && i != j) { ans++; }
		}
	}

	cout << ans << endl;

	return 0;
}

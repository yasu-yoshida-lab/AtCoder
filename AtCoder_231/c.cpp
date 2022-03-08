#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() { 
	int n, q;
	cin >> n >> q;

	vector<ll> a(n), x(q);
	for (int i = 0; i < n; ++i) { cin >> a[i]; }

	sort(a.begin(), a.end());
	for (int i = 0; i < q; ++i) { 
		int x; cin >> x;
		int left = -1, right = n;
		while(right - left > 1) {
			int med = (left + right) / 2;
			if (a[med] >= x) { right = med; }
			else { left = med; }
		}
		cout << n - right << endl; 
	}

	return 0;
}

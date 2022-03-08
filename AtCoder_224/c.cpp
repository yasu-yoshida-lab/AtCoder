#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() { 
	int n;
	cin >> n;

	vector<pair<ll, ll>> p(n);
	for (auto & nx : p) { cin >> nx.first >> nx.second; }

	int ans = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = i + 1; j < n; ++j) { 
			for (int k = j + 1; k < n; ++k) { 
				if ((p[j].first - p[i].first) * (p[k].second - p[i].second) - (p[k].first - p[i].first) * (p[j].second - p[i].second) != 0) { ans++; }
			}
		}
	}

	cout << ans << endl;
	return 0;
}

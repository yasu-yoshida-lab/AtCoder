#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() { 
	int n, m;
	cin >> n >> m;

	vector<ll> a(n), b(m);
	for (auto & val : a) { cin >> val; }
	for (auto & val : b) { cin >> val; }

	for (const auto val : b) { 
		auto ans = find(a.begin(), a.end(), val);
		if (ans == a.end()) { 
			cout << "No" << endl;
			return 0;
		} else { 
			a.erase(ans);
		}
	}

	cout << "Yes" << endl;

	return 0;
}

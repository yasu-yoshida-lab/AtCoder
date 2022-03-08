#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, p;
	cin >> n >> p;

	vector<int> a(n);

	for (auto & val : a) { cin >> val; }

	int ans = 0;

	for (const auto val : a) { 
		if (val < p) { ans++; }
	}

	cout << ans << endl;

	return 0;
}

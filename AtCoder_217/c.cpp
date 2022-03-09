#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() { 
	int n; 
	cin >> n;

	vector<int> p(n), q(n);
	for (auto & val : p) { 
		cin >> val;
		--val;
	}

	for (int i = 0; i < n; ++i) { q[p[i]] = i; }
	for (int i = 0; i < n; ++i) { cout << q[i] + 1 << " "; }
	cout << endl;

	return 0;
}

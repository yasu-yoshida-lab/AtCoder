#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> x(n), y(n);
	for (int i = 0; i < n; ++i) { cin >> x[i] >> y[i]; }
	string s; cin >> s;

	map<int, int> Rmin, Lmax;

	for (int i = 0; i < n; ++i) { 
		if (s[i] == 'R') { Rmin.count(y[i]) ? Rmin[y[i]] = min(Rmin[y[i]], x[i]) : Rmin[y[i]] = x[i]; }
		else { Lmax[y[i]] = max(Lmax[y[i]], x[i]); }
	}

	for (int i = 0; i < n; ++i) { 
		if (Rmin.count(y[i]) && Rmin[y[i]] <= Lmax[y[i]] && Lmax.count(y[i])) { 
			cout << "Yes" << endl;
			return 0;
		}
	}

	cout << "No" << endl;

	return 0;
}

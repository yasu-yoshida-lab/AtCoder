#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() { 
	ll x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	ll r1, r2;
	for (ll x = x1 - 2; x < x1 + 3; ++x) { 
		for (ll y = y1 - 2; y < y1 + 3; ++y) { 
			r1 = pow(x1 - x, 2.0) + pow(y1 - y, 2.0);
			r2 = pow(x2 - x, 2.0) + pow(y2 - y, 2.0);
			if (r1 == 5 and r2 == 5) { 
				cout << "Yes" << endl;
				return 0;
			}
		}
	}

	cout << "No" << endl;


	return 0;
}

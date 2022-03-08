#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll a, b;
	cin >> a >> b;

	string ans = "Easy";

	while (a > 0 || b > 0) { 
		if ((a % 10) + (b % 10) >= 10) { ans = "Hard"; }
		a /= 10;
		b /= 10;
	}

	cout << ans << endl;

	return 0;
}

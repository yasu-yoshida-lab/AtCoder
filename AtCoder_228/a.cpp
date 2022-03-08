#include <bits/stdc++.h>
using namespace std;

int main() { 
	int s, t, x;
	cin >> s >> t >> x;

	string ans = "No";

	if (s < t) { 
		if (s <= x and x < t) { ans = "Yes"; }
		else { ans = "No"; }
	} else {
		if (x < t or s <= x) { ans = "Yes"; }
		else { ans = "No"; }
	}

	cout << ans << endl;

	return 0;
}

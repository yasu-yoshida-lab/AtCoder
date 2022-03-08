#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() { 
	int T;
	cin >> T;

	while (T--) { 
		ll a, s;
		cin >> a >> s;
		string ans = "No";
		if (2 * a <= s) { 
			ll differ = s - 2 * a;
			if ((differ & a) == 0) { ans = "Yes"; } 
		}
		cout << ans << endl;
	}

	return 0;
}


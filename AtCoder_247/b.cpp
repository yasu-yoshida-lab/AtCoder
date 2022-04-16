#include <bits/stdc++.h>
using namespace std;

int main() { 
	int n; cin >> n;

	string s[n], t[n];
	for (int i = 0; i < n; ++i) { 
		cin >> s[i] >> t[i];
	}

	string ans = "Yes";
	bool check_s = false, check_t = false;
	for (int i = 0; i < n; ++i) { 
		for (int j = 0; j < n; ++j) { 
			if (i == j) { continue; }
			if (s[i] == s[j] || s[i] == t[j]) { check_s = true; }
			if (t[i] == s[j] || t[i] == t[j]) { check_t = true; }
		}
		if (check_s && check_t) { ans = "No"; }
	}

	cout << ans << endl;

}

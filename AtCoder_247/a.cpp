#include <bits/stdc++.h>
using namespace std;

int main() {
	constexpr int n = 4;
	string s; cin >> s;
	string ans; for (int i = 0; i < n; ++i) { ans += "0"; }
	for (int i = 0; i < n; ++i) { ans[i + 1] = s[i]; }

	cout << ans << endl;
}

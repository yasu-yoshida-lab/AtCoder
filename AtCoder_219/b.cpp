#include <bits/stdc++.h>
using namespace std;

int main() {
	map<char, string> mp;
	for (int i = 1; i <= 3; ++i) { cin >> mp[('0' + i)]; }

	string t;
	cin >> t;

	string ans = "";
	for (int i = 0; i < (int)t.size(); ++i) { ans += mp[t[i]]; }

	cout << ans << endl;

	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;

	string ans = "";
	if (s.size() < 4) { 
		for (int i = 0; i < 4 - s.size(); ++i) { ans += '0'; }
		ans = ans + s;
	} else { ans = s; }

	cout << ans << endl;

	return 0;
}

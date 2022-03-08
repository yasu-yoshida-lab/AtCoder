#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<string> v(2);
	for (int i = 0; i < 2; ++i) { cin >> v[i]; }

	string ans = "No";
	if (v[0][0] == '#' or v[1][1] == '#') { 
		if (v[0][1] == '#' or v[1][0] == '#') { ans = "Yes"; }
	}
	else { 
		if (v[0][0] == '#' or v[1][1] == '#') { ans = "Yes"; }
	}

	cout << ans << endl;

	return 0;
}

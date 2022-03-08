#include <bits/stdc++.h>
using namespace std;

int main() {
	string x;
	cin >> x;
	int n; 
	cin >> n;
	vector<string> s(n);
	for (auto & val : s) { cin >> val; }

	vector<int> pos(26);
	for (int i = 0; i < 26; ++i) { pos[x[i] - 'a'] = i; }

	vector<vector<int>> v(n);
	for (int i = 0; i < n; ++i) { 
		for (const auto c : s[i]) { 
			v[i].push_back(pos[c - 'a']);
		}
	}

	sort(v.begin(), v.end());

	for (const auto val : v) {
		for (const auto i : val) {
			cout << x[i]; 
		}
		cout << endl;
	}


	return 0;
}

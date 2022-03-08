#include <bits/stdc++.h>
using namespace std;

int main() { 
	int n;
	cin >> n;

	vector<string> s(n);
	for (int i = 0; i < n; ++i) { cin >> s[i]; }

	int max = 0;
	string name;
	map<string, int> mp;
	for (auto i : s) { 
		mp[i]++;
		if (max < mp[i]) {
			max = mp[i];
			name = i;
		}
	}

	cout << name << endl;


	return 0;
}

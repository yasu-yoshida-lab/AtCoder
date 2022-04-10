#include <bits/stdc++.h>
using namespace std;

int main() { 
	vector<string> v = { "H", "2B", "3B", "HR" };
	map<string, int> mp;
	for (const auto val : v) { mp[val] = 0; }

	for (int i = 0; i < 4; ++i) { 
		string s; cin >> s;
		mp[s] = 1;
	}

	int sum = 0;
	for (const auto val : mp) { 
		sum += val.second; 
	}

	if (sum == 4) { cout << "Yes" << endl; }
	else { cout << "No" << endl; }
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	map<char, int> mp;

	string s = "01234567889";
	for (const auto c : s) { mp[c] = 0; }

	cin >> s;
	for (const auto c : s) { mp[c]++; }

	s = "01234567889";
	for (const auto val : mp) { 
		if (val.second == 0) { cout << val.first << endl; }
	}
}

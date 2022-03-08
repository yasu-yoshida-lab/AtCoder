#include <bits/stdc++.h>
using namespace std;

int main() { 
	vector<int> v(26);
	for (auto & val : v) { cin >> val; }

	string s = "abcdefghijklmnopqrstuvwxyz";

	map<int, char> mp;
	for (const auto c : s) { mp[(int)c - 'a' + 1] = c; }

	for (const auto val : v) { printf("%c", mp[val]); }
	cout << endl;

	return 0;
}

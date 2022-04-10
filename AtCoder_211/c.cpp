#include <bits/stdc++.h>
using namespace std;

int main() { 
	string s; cin >> s; 
	string base_s = "chokudai";
	const int mod = 1e9 + 7;

	map<char, int> mp;
	for (int i = 0; i < (int)s.size(); ++i) { 
		for (int j = 0; j < (int)base_s.size(); ++j) { 
			if (s[i] == base_s[j]) { (mp[base_s[j]] += mp[base_s[j - 1]]) %= mod; }
		}
		if (s[i] == base_s[0]) { (mp[s[i]] += 1) %= mod; }
	}

	cout << mp['i'] << endl; 

}
